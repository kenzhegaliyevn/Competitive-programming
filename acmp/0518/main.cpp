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

const int MAXN = (int)1e9 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int n, k, a[20][20], dp[30][30][50];
char c;
int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d %d\n", &n, &k);

	for (int i = 0; i <= n; i++){
		a[0][i] = 1;
		a[i][0] = 1;
		a[i][n + 1] = 1;
		a[n + 1][i] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++){
			scanf ("%c", &c);
			a[i][j] = c - '0';
		}
		scanf ("\n");
	}

	dp[1][1][0] = 1;

	for (int h = 1; h <= k; h++){
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (a[i][j] == 0){
					if (a[i - 1][j] == 0) dp[i][j][h] += dp[i - 1][j][h - 1];
					if (a[i + 1][j] == 0) dp[i][j][h] += dp[i + 1][j][h - 1];
					if (a[i][j - 1] == 0) dp[i][j][h] += dp[i][j - 1][h - 1];
					if (a[i][j + 1] == 0) dp[i][j][h] += dp[i][j + 1][h - 1];									
				}
			}	
		}
	}
	printf ("%d", dp[n][n][k]);	
	return 0;
}