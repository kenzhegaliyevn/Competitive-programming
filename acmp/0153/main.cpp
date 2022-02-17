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

int a[16], ans = 1e9, n, m;

void rec(int x, int y, int z){
	if (x == n){
		ans = min(ans, y);
		return;
	}
	if (x > n)
		return;
	for (int i = z; i < m; i++){
		rec(x + a[i], y + 1, i + 1);
		rec(x + 2*a[i], y + 2, i + 1);
	}
}
int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d %d", &n, &m);
	int sum = 0;
	for (int i = 0; i < m; i++){
		scanf ("%d", &a[i]);
		sum += 2*a[i];
	}
	if (sum < n){
		printf ("%d", -1);
		return 0;
	}
	rec(0, 0, 0);
	if (ans == 1e9)
		printf ("%d", 0);
	else
		printf ("%d", ans);
	return 0;
}