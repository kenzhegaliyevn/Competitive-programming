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
	string s, t;
	cin >> s >> t;
	if (sz(s) != sz(t)){
		cout << "No";
		return 0;
	}
	for (int i = 0; i < sz(s); i++){
		if (isupper(s[i]))
			s[i] = tolower(s[i]);
		if (isupper(t[i]))
			t[i] = tolower(t[i]);
	}
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	for (int i = 0; i < sz(s); i++){
		if (s[i] != t[i]){
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}