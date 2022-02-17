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
	int x1, y1, x2, y2, n, x, y;
	scanf ("%d %d\n%d %d\n%d\n", &x1, &y1, &x2, &y2, &n);
	for (int i = 0; i < n; i++){
		scanf ("%d %d\n", &x, &y);
		if (2 * sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1)) <= sqrt((x - x2) * (x - x2) + (y - y2) * (y - y2))){
			printf ("%d", i + 1);
			return 0;
		}
	}
	printf ("NO");
	return 0;
}