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

ll dp[101][1000], n;

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d", &n);
	dp[0][0] = 1;
	for (int i = 1; i <= n; i++){
		for (int j = 0; j <= 9*n; j++){
			for (int k = 0; k <= 9; k++)
				if (j >= k) dp[i][j] += dp[i - 1][j - k];				
		}
	}
	printf ("%I64d", dp[n][9*n/2]);
	return 0;
}