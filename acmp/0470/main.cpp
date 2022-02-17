#include <iostream>
#include <stdio.h>
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

int x[110][110], w, h, n, a, b, c, d;
ll dp[110][110], finaldp[110][110];
ll ans;
int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d %d %d\n", &h, &w, &n);
	for (int i = 1; i <= h; i++)
		for (int j = 1; j <= w; j++)
			scanf ("%d ", &x[i][j]);

	for (int i = 1; i <= w; i++)
		dp[1][i] = x[1][i];
	for (int i = 2; i <= h; i++){
		for (int j = 1; j <= w; j++)	
			dp[i][j] = dp[i - 1][j] + x[i][j];
	}

	for (int i = 1; i <= h; i++)
		finaldp[i][1] = dp[i][1];

	for (int i = 1; i <= h; i++){
		for (int j = 2; j <= w; j++)	
			finaldp[i][j] = finaldp[i][j - 1] + dp[i][j];
	}

	for (int i = 1; i <= n; i++){
		scanf ("%d %d %d %d", &a, &b, &c, &d);	
		if (a <= c && b <= d) printf ("%I64d\n", finaldp[c][d] - finaldp[c][b - 1] - (finaldp[a - 1][d] - finaldp[a - 1][b - 1]));
		else if (a >= c && b <= d) printf ("%I64d\n", finaldp[a][d] - finaldp[a][b - 1] - (finaldp[c - 1][d] - finaldp[c - 1][b - 1]));
		else if (a <= c && b >= d) printf ("%I64d\n", finaldp[c][b] - finaldp[c][d - 1] - (finaldp[a - 1][b] - finaldp[a - 1][d - 1]));
		else {
			swap(a, c);
			swap(b, d);
			printf ("%I64d\n", finaldp[c][d] - finaldp[c][b - 1] - (finaldp[a - 1][d] - finaldp[a - 1][b - 1]));		
		}
	}
	return 0;
}