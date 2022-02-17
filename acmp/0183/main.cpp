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
 
ll dp[MAXN];
 
int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    int k, p;
	scanf ("%d %d", &k, &p);
    dp[2] = 1;
    for (int i = 3; i <= k; i++){
        dp[i] = dp[i - 1];
        if (i % 2 == 0)
            dp[i] += dp[i/2];
        dp[i] %= p;
    }   
//  for (int i = 0; i <= k; i++)
//      printf ("%d = %d\n", i, dp[i]); 
	printf ("%I64d", dp[k] % p);
    return 0;
}