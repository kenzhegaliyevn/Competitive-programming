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

ll a1, b1, a2, b2, a3, b3;

int main(){
	scanf ("%lld%lld%lld%lld%lld%lld", &a1, &b1, &a2, &b2, &a3, &b3);
	long double s = abs((a1 - a3)*(b2 - b3) - (b1 - b3)*(a2 - a3));
	printf ("%.1Lf", s/2);
	return 0;
}
