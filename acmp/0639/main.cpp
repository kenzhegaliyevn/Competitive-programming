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

vector <pair <double, string> > p;

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, m, sum = 0;
	double d;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> m;
		sum += m;
		for (int j = 0; j < m; j++){
			cin >> d >> s;
			p.pb(mp(d, s));
		}
	}
	sort(p.begin(), p.end());
	reverse(p.begin(), p.end());

	cout << sum << "\n";
	for (int i = 0; i < (int)p.size(); i++){
		printf ("%.2f ", p[i].F); 
		cout << p[i].S << "\n";
	}
	return 0;
}
