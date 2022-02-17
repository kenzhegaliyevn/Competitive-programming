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

int n, k;
string s, t;
vector <string> vs;

int main(){
	scanf ("%d%d", &n, &k);
	while (k){
		s += char(k % 10 + '0');
		k /= 10;
	}
	reverse(s.begin(), s.end());
	for (int i = 1; i <= n; i++){
		int tmp = i;
		t = "";
		while (tmp){
			t += char(tmp % 10 + '0');
			tmp /= 10;		
		}
		reverse(t.begin(), t.end());
		vs.pb(t);
	}	
	sort(vs.begin(), vs.end());
	for (int i = 0; i < sz(vs); i++){
		if (vs[i] == s)
			printf ("%d\n", i + 1);
	}
	return 0;
}
