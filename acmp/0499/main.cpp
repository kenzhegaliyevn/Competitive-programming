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
	int k, w, a1, b1, a2, b2, a3, b3;
	scanf ("%d %d\n", &k, &w);
	scanf ("%d %d %d %d %d %d", &a1, &b1, &a2, &b2, &a3, &b3);
	int kg1 = a1 + a2, cnt1 = b1 + b2;		
	int kg2 = a1 + a3, cnt2 = b1 + b3;		
	int kg3 = a2 + a3, cnt3 = b2 + b3;		
	if ((k <= cnt1 && w >= kg1) || (k <= cnt2 && w >= kg2) || (k <= cnt3 && w >= kg3) || (a1 + a2 + a3 <= w && b1 + b2 + b3 >= k) || (a1 <= w && b1 >= k) || (a2 <= w && b2 >= k) || (a3 <= w && b3 >= k))
		printf ("YES");
	else
		printf ("NO");
	return 0;
}