#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <sstream>
#include <bitset>
#include <cstdlib>
#define sqr(x) (x) * (x)    
#define F first
#define S second                      
#define pb push_back
#define sz(a) int((a).size())
#define mp make_pair

using namespace std;

const int MAXN = (int)2e5 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int n, m;
int dp[100][100];

bool bit(int mask, int pos){
	if (mask & (1 << pos)) return 1;
	return 0;
}
bool ok(int mask1, int mask2){
	for (int i = 1; i < m; i++)
		if (bit(mask1, i) == bit(mask1, i - 1) && bit(mask2, i) == bit(mask2, i - 1) && bit(mask1, i) == bit(mask2, i)) return 0;
	return 1;
}

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d %d", &n, &m);
	if (n < m) swap(n, m);
	for (int i = 0; i < (1 << m); i++)
		dp[0][i] = 1;
	for (int i = 1; i < n; i++){
		for (int j = 0; j < (1 << m); j++){
			for (int k = 0; k < (1 << m); k++)
				if (ok(j, k)) dp[i][j] += dp[i - 1][k];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < (1 << m); j++)
			printf ("%d ", dp[i][j]);
		printf ("\n");
	}
	int ans = 0;
	for (int i = 0; i < (1 << m); i++)
		ans += dp[n - 1][i];
	printf ("%d", ans);
	return 0;
}