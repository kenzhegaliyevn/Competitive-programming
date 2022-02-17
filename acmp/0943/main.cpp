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

int n, m, x, y;
int a[100][100];
int cnt;

int main(){
	scanf ("%d%d%d%d", &n, &m, &y, &x);
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (i % 2 == 0)
				a[i][j] = cnt++;	
			else
				a[i][m - 1 - j] = cnt++;
		}
	
	printf ("%d\n", a[y - 1][x - 1]);
    return 0;
}
