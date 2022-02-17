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

int a[21], used[21], t = 1, cnt, ans = MAXN, n;

void rec(int v, int t){
	if (t == 10 && used[v] == 1){
		t = 1;
		return;
	}
	for (int i = n - 1; i >= 0; i--){
		if (used[i] == 0){
			used[i] = 1;
			a[v] = t;
			int sum = 0, mult = 1;
			for (int j = n - 1; j >= 0; j--){
				sum += a[j], mult *= a[j];
				if (mult > 180)
					break; 
			}
			if (sum == mult)
				cnt++;
			rec(i, t + 1);
			a[i] = 1;
		}
	}	
}

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d", &n);
	if (n == 1){
		printf ("%d %d", 10, 0);
		return 0;
	}
	for (int i = 0; i < n; i++)
		a[i] = 1;
	rec(n - 1, 1);	
	printf ("%d", cnt);
	return 0;
}