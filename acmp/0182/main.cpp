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
 
const int MAXN = (int)3e4 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int a1, a2,
	b1, b2,
	c1, c2;
	
int A1, B1,
	A2, B2;

int ansx, ansy;
int AB, BC, AC;

int main(){
	scanf ("%d%d%d%d%d%d", &a1, &a2, &b1, &b2, &c1, &c2);
	AB = sqr(b1 - a1) + sqr(b2 - a2);
	BC = sqr(c1 - b1) + sqr(c2 - b2);
	AC = sqr(c1 - a1) + sqr(c2 - a2);


	if (AB + BC == AC){
		// AB, BC katet
		double midx = (a1 + c1 + 0.0)/2;
		double midy = (a2 + c2 + 0.0)/2;
		
		ansx = 2*midx - b1;
		ansy = 2*midy - b2;
	} else if (AC + BC == AB){
		// AC, BC
		double midx = (a1 + b1 + 0.0)/2;
		double midy = (a2 + b2 + 0.0)/2;
		ansx = 2*midx - c1;
		ansy = 2*midy - c2;
	} else {
		// AC, AB
		double midx = (b1 + c1 + 0.0)/2;
		double midy = (b2 + c2 + 0.0)/2;
		ansx = 2*midx - a1;
		ansy = 2*midy - a2;
	}
	printf ("%d %d\n", ansx, ansy);
	return 0;
}

