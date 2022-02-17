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
const int MAXN = (int)1e4 + 1;


int n, m;

string a[50], b[50];
int ans[50];
string s, t;

void solve(){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			int cur = 0;
			if (sz(a[i]) != sz(b[j]))
				continue;
			for (int k = 0; k < sz(a[i]); k++){
				if (a[i][k] == b[j][k])
					continue;
				cur++;
			}
			if (cur == 1)
				ans[i]++;
		}
	}
	for (int i = 0; i < n; i++)
		cout << ans[i] << ' ';
	cout << '\n';
}

int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> s;
		a[i] = s;
	}	
	cin >> m;
	for (int j = 0; j < m; j++){
		cin >> t;
		b[j] = t;
	}
	solve();
	return 0;
}
