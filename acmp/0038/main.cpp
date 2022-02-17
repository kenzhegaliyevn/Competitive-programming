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

int dp[101][101], n, a[101];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d", &n);
	for (int i = 0; i < n; i++){
		scanf ("%d", &a[i]);
		dp[i][i] = a[i];	
	}
	for (int len = 2; len <= n; len++) {
		for (int i = 0; i + len <= n; i++) {
			int j = i + len - 1;
			dp[i][j] = max(a[i] - dp[i + 1][j], a[j] - dp[i][j - 1]);
		}
	}
/*	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++)
			printf ("%d ", dp[i][j]);
		printf ("\n");
	}*/
	if (dp[0][n - 1] > 0)
		printf("%d", 1);
	else if (dp[0][n - 1] < 0)
		printf("%d", 2);
	else
		printf("%d", 0);
	return 0;
}