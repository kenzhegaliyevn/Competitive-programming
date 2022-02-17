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
 
int n, m, a[110][110], dp[110][110], b[110][110], maxi = -1000100, tmp[110], tmp1[110];
 
int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    scanf ("%d %d\n", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            scanf ("%d", &a[i][j]);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] += (dp[i - 1][j] + a[i][j]);
	
/*  	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) 
            printf ("%d ", dp[i][j]);
        printf ("\n");
    }*/
    for (int i = n; i > 0; i--){
		for (int j = i - 1; j >= 0; j--){
			int sum = 0;
			int mini = 0;
			for (int k = 1; k <= m; k++){
				sum += dp[i][k] - dp[j][k];					
				maxi = max(maxi, sum - mini);
				mini = min(sum, mini);
			}						
		}
    }
/*	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++)
//			maxi = max(maxi, b[i][j]);
			printf ("%d ", b[i][j]);
		printf ("\n");
	}*/
	printf ("%d", maxi);
    return 0;
}
