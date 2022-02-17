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
	double x1, y1, r1, x2, y2, r2;
	scanf ("%lf %lf %lf\n %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
	double r = sqrt(sqr(x2 - x1) + sqr(y2 - y1));
	if (r1 + r2 >= r && r + r1 >= r2 && r + r2 >= r1)
		printf ("YES");	
	else
		printf ("NO");
	return 0;
}