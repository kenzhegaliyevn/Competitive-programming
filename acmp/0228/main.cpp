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

double x, y, dpr[5001], dpd[5001], dpe[5001];

int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);	
	int n;
	scanf ("%d", &n);
	dpr[0] = 100.0;
	scanf ("%lf %lf", &x, &y);
	dpd[0] = 100.0/x;
	dpe[0] = 100.0/y;
//	printf ("rub = %.2lf $ = %.2lf euro = %.2lf\n", dpr[0], dpd[0], dpe[0]);
	for (int i = 1; i < n; i++){
		scanf ("%lf %lf", &x, &y);
		dpr[i] = max(dpr[i - 1], max(dpd[i - 1] * x, dpe[i - 1] * y));
		dpd[i] = dpr[i]/x;
		dpe[i] = dpr[i]/y;
//		printf ("rub = %.2lf $ = %.2lf euro = %.2lf\n", dpr[i], dpd[i], dpe[i]);
	}
	printf ("%.2lf", dpr[n - 1]);
    return 0;
}
