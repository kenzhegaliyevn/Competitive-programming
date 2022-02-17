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

int n, m;
char c;
int u = 1000, d, r, l = 1000 ;
char ans[110][110];


int main(){
	scanf ("%d%d\n", &n, &m);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf ("%c", &c);
			if (c == '*'){
				u = min(u, i);
				d = max(d, i);
				r = max(r, j);
				l = min(l, j);
			}
		}
		scanf ("\n");
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			ans[i][j] = '.';
	
	
	for (int i = u; i <= d; i++)
		for (int j = l; j <= r; j++)
			ans[i][j] = '*';	
			
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			printf ("%c", ans[i][j]);
		printf ("\n");
	}
//	printf ("up = %d\ndown = %d\nright = %d\nleft = %d", u + 1, d + 1, r + 1, l + 1);
	return 0;
}

