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

int n, m, x;
set <int> s, t;

int main(){
	scanf ("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf ("%d", &x);
		s.insert(x);
	}
	
	int l = s.size();
	
	for (int i = 0; i < m; i++) {
		scanf ("%d", &x);
		t.insert(x);
	}
	
	if (s.size() != t.size()){
		printf ("%d", 0);
		return 0;
	}
	
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
		if (	t.count(*it) < 1) {
			printf ("%d", 0);
			return 0;
		}
	printf ("%d", 1);
    return 0;
}
