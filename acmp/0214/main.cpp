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

char dp[126][226][226];

int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);	
	int n, m;
	scanf ("%d %d", &n, &m);
	for (int x = 0; x <= 120; x++){
		for (int y = 0; y <= 220; y++){
			for (int z = 0; z <= 220; z++){
				if (x == 0 && y == 0 && z == 0){
					dp[x][y][z] = 0;
					continue;                    
				}
				if (x > 0){
					dp[x][y][z] |= !dp[x - 1][y][z];
					dp[x][y][z] |= !dp[x - 1][y + 1][z];
					dp[x][y][z] |= !dp[x - 1][y][z + 1];
				}
				if (y > 0){
					dp[x][y][z] |= !dp[x][y - 1][z];
					dp[x][y][z] |= !dp[x][y - 1][z + 1];
				}
				if (z > 0)
					dp[x][y][z] |= !dp[x][y][z - 1];
			}
		}
	}
	if (dp[m][n][0] == 1) 
		printf ("%d", 1);
	else 
		printf ("%d", 2);
    return 0;
}
