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
        
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
const int oo = (int)1e9 + 1;
const int mod = (int)1e9 + 7;
const int maxn = (int)1e5 + 1;

char a, b, c, d;
bool used[10][10];


void dfs(int x, int y){
	used[x][y] = 1;
	
	if (x + 1 <= 8 && y + 1 <= 8)
		dfs(x + 1, y + 1);
		
	if (x - 1 > 0 && y + 1 <= 8)
		dfs(x - 1, y + 1);	
}
 
int main(){
	scanf ("%c%c %c%c", &a, &b, &c, &d);
	int a1 = a - 'a' + 1;
	int b1 = b - '1' + 1;
	int c1 = c - 'a' + 1;
	int d1 = d - '1' + 1;
	
	if ((a1 + b1) % 2 != (c1 + d1) % 2) {
		printf ("NO\n");
		return 0;		
	}
	
	dfs(	a1, b1);
	if (!used[c1][d1])
		printf("NO\n");
	else 
		printf("YES\n");
	
    return 0;
}
