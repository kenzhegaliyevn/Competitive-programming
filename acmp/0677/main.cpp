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
	int k, n, m, d;
	scanf ("%d %d %d %d", &k, &n, &m, &d);
	if (k*n*m - n*m - k*m - k*n <= 0)
		printf ("%d", -1);
	else {
		if (k*n*m*d % (k*n*m - n*m - k*m - k*n) == 0) {
			int t = k*n*m*d/(k*n*m - n*m - k*m - k*n);
			if (t % k == 0 && t % n == 0 && t % m == 0)			
				printf ("%d", k*n*m*d/(k*n*m - n*m - k*m - k*n));
			else
				printf ("%d", -1);			
		} else
			printf ("%d", -1);			
	}                                  
	return 0;
}