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

int a[30], b[30];
string s, t;

int main(){
	cin >> s >> t;
	if (sz(s) != sz(t)){
		cout << "NO\n";
		return 0;
	}
	for (int i = 0; i < sz(s); i++)
		a[s[i] - 'A']++;

	for (int i = 0; i < sz(t); i++)
		b[t[i] - 'A']++;
	
	for (int i = 0; i < 26; i++){
		if (a[i] != b[i]){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}
