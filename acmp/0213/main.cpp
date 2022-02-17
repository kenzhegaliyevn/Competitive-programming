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

int n, m, t, maxi, x;
int a[110];

int main(){
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	scanf ("%d%d", &t, &m);
	for (int j = 0; j < m; j++){
		int cur = 0;
		bool down = 0;
		for (int i = 0; i < n; i++){
			scanf ("%d", &x);
			if (x)
				cur += a[i];
			else
				down = 1;
		}
		if (!down)
			cur += t;
		cur = cur - j*2;
		maxi = max(maxi, cur);
		printf ("%d\n", maxi);
	}
    return 0;
}
