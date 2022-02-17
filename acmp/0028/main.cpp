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

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int x1, y1, x2, y2, xa, ya, k1, k2;
	scanf ("%d %d %d %d\n %d %d", &x1, &y1, &x2, &y2, &xa, &ya);
	if (x1 == x2)
		xa = 2 * x1 - xa;
	if (y1 == y2)
		ya = 2 * y1 - ya;
	printf ("%d %d", xa, ya);
	return 0;
}
