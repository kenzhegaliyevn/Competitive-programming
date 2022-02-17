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

int dp[10010][110];
bool p[10100];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n;
	scanf ("%d", &n);
	for (int i = 0; i < 100; i++)
		dp[2][i] = 1;
	for (int i = 2; i <= 1000; i++)
		if (!p[i]) {
			for (int j = i + i; j <= 1000; j += i) p[j] = 1;
		}
	for (int i = 3; i <= n; i++){
		for (int j = 100; j <= 1000; j++){
			if (p[j]) continue;
			int f = j / 10;
			int s = j % 100;
			dp[i][s] = (dp[i][s] + dp[i - 1][f]) % 1000000009;
		}
	}	

	ll ans = 0;
	for (int i = 0; i < 100; i++) ans = (ans + dp[n][i]) % 1000000009;
	printf ("%I64d", ans);
	return 0;
}