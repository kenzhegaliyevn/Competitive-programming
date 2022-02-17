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
	int n, m, h, k, x, y;
	scanf ("%d", &n);
	int ans = n, t = n/2 + 1, i = 1;
	while (i != t){
		h = n/i;
		m = abs(h - i);
		k = n - h * i; 
		if (k + m < ans)
			ans = k + m, x = h, y = i;
		i++;
	}
	printf ("%d %d", x, y);
	return 0;
}