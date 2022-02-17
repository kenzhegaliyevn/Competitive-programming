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


int n, x;
//pair<string, pair<int, int> > p[40];
bool used[40];
string t[40];
int len[40];
int c[40];
int quality[40];

void solve(int x){
	for (int i = 2; i < 37; i++){
		string s = "";
		for (int j = 0; j < 40; j++)
			used[j] = 0;
		int tmp = x;
		while(tmp){
			if (tmp % i > 9)
				s += char(tmp % i - 10 + 'A');
			else
				s += char(tmp % i + '0');
			tmp /= i;
		}
		while (s[sz(s) - 1] == '0')
			s.pop_back();
		reverse(s.begin(), s.end());
		t[i] = s;
		len[i] = sz(s);

		for (int j = 0; j < sz(s); j++) {
			if (s[j] >= '0' && s[j] <= '9') {
				used[s[j] - '0'] = 1;
//				cout << s[j] - '0' << endl;
			} else {
				used[s[j] - 'A' + 10] = 1;
//				cout << s[j] - '0' << endl;
			}	
		}

		int cnt = 0;		
		for (int j = 0; j < 40; j++) {
			if (used[j]) 
				cnt++;
		}
		c[i] = cnt;
		quality[i] = c[i] + len[i];
//		p[i].first = s;
//		p[i].second.first = sz(s);
//		p[i].S.F = cnt;
	}
}

int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> x;
		solve(x);
	//	for (int i = 2; i < 37; i++)
	//		cout << "Base " << i << ' ' << t[i] << ' ' << quality[i] << ' ' << len[i] << ' ' << c[i] << '\n';
	//		cout << "Base " << i << ' ' << p[i].F << ' ' << p[i].S.F << ' ' << p[i].S.S << '\n';
		int p = 2;
		int q = quality[2];
		int ll = len[2];
		int cc = c[2];
		for (int i = 2; i < 37; i++){
			if (p == i) continue;
			if (q > quality[i]){
				p = i;
				q = quality[i];
				ll = len[i];
				cc = c[i];
			}
		}
		cout << p << ' ' << t[p] << '\n';
	}
	return 0;
}

