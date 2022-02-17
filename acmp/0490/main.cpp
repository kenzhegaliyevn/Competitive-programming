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
 
const int MAXN = (int)3e4 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;


int month[15] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string s, t;
int d, m, y, dd, mm, yy, ans;

int main(){
	cin >> s >> t;
	for (int i = 0; i < 2; i++){
		d *= 10;
		d += s[i] - '0';
	}
	for (int i = 3; i < 5; i++){
		m *= 10;
		m += s[i] - '0';
	}
	for (int i = 6; i < sz(s); i++){
		y *= 10;
		y += s[i] - '0';
	}
	
	for (int i = 0; i < 2; i++){
		dd *= 10;
		dd += t[i] - '0';
	}
	for (int i = 3; i < 5; i++){
		mm *= 10;
		mm += t[i] - '0';
	}
	for (int i = 6; i < sz(s); i++){
		yy *= 10;
		yy += t[i] - '0';
	}
	
	if (m == mm){
		if (yy != y)
			cout << 365 + dd - d << '\n';
		else 
			cout << dd - d << '\n';
	} else if (mm > m){
		if (yy == y){
			ans = month[m - 1] - d;
			for (int i = m; i < mm - 1; i++)
				ans += month[i];
			ans += dd;
			cout << ans << '\n';
		} else {
			ans = 365;
			ans += month[m - 1] - d;
			for (int i = m; i < mm - 1; i++)
				ans += month[i];
			ans += dd;
			cout << ans << '\n';
		}
	} else {
		ans = month[m - 1] - d;
		for (int i = m; i < 12; i++)
			ans += month[i];
		for (int i = 0; i < mm - 1; i++)
			ans += month[i];
		ans += dd;
		cout << ans << '\n';
	}
	return 0;
}

