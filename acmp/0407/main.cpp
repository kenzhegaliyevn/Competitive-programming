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

const int MAXN = (int)1e6 + 1;
const int oo = (int)1e9 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

ll dp[MAXN], a[11], n, k, mini;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	scanf ("%d", &k);
	for (int i = 1; i <= MAXN; i++)
		dp[i] = oo;
	for (int i = 1; i <= MAXN; i++){
		for (int j = 0; j < n; j++){
			if (i >= a[j])
				dp[i] = min(dp[i], dp[i - a[j]] + 1);
		}
	}
	if (dp[k] >= oo)
		printf ("%d", -1);
	else
		printf ("%d", dp[k]);		
	return 0;
}