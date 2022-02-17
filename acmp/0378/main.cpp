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

int a[501], dp[50010], c[50010], n, ans;

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	dp[0] = 1;
	int x = 1;
	for (int j = 0; j < n; j++){
		for (int i = 0; i < 50001; i++)
			c[i] = dp[i];			
		for (int i = 0; i < 50001; i++)
			if (i >= a[j]) dp[i] = c[i]|c[i - a[j]]; else dp[i] = c[i];
   	}
   	for (int i = 0; i < 50001; i++)
   		if (dp[i]) ans++;
	printf ("%d ", ans);
	return 0;
}