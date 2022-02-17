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

string s;
int a = 1, l, r;

int main(){
	getline(cin, s);
	if (sz(s) == 1) {
		cout << "NO\n";
		return 0;
	}
	for (int i = 0; i < sz(s); i++){
		l = 0;
		for (int j = 0; j < a; j++){
			l += (s[j] - '0');
			l = (l > 9) ? (l % 10 + 1) : l;
		}
		r = 0;
		for (int j = a; j < sz(s); j++){
			r += (s[j] - '0');
			r = (r > 9) ? (r % 10 + 1) : r;
		}
		
		if (l == r) {
			cout << "YES\n";
			return 0;	
		}
		a++;
	}	
	cout << "NO\n";	
	return 0;
}

