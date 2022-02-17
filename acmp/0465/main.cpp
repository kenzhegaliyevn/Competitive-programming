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
 
const int MAXN = (int)1e7 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
 
ll dp[1001];

int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);	
    int n;
    scanf ("%d", &n);
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= n + 1; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	printf ("%d", dp[n + 1]);			
    return 0;
}