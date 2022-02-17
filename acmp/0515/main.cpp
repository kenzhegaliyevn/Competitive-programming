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

double sum = 0;

void solve (int x1, int y1, int x0, int y0){
	sum += sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
}
int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, x0, y0, x, y;
	scanf ("%d", &n);
	x0 = 0, y0 = 0;
	for (int i = 0; i < n; i++){
		scanf ("%d %d", &x, &y); 
		solve(x, y, x0, y0);
		x0 = x, y0 = y;
	}
	solve(0, 0, x0, y0);
	printf ("%.3f", sum);
	return 0;
}