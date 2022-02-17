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

int n;
double a[101], dp[1000];

int main(){
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%lf", &a[i]);
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
		dp[i] = dp[i - 1]*a[i - 1] + (1 - dp[i - 1])*(1 - a[i - 1]);
//	for (int i = 0; i <= n; i++)
//		printf ("%lf ", dp[i]);
	printf ("%.6f", dp[n]);
	return 0;
}
