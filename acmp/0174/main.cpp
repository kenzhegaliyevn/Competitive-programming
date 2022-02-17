#include <iostream>
#include <stdio.h>
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
 
const int MAXN = (int)1e9 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
 
int n;
double t;
int a[50];

int main(){
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	scanf ("%lf", &t);
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    		if (a[i] > t)
	    		t = (t + (a[i] + 0.0))/2;
    	printf ("%.6lf\n", t);
    return 0;
}
