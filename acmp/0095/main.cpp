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

int sum, cnt;
vi v;

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	string s;
	cin >> s;
	if (s == "1" || s == "2" || s == "3" || s == "4" || s == "5" || s == "6" || s == "7" || s == "8" || s == "9"){
		cout << s << ' ' << cnt;
		return 0;
	}
	for (int i = 0; i < sz(s); i++)	
		v.pb(s[i] - '0');
	while (true){
		sum = 0;
		cnt++;
		for (int i = 0; i < (int)v.size(); i++)	
			sum += v[i];
		if (sum < 10){
			cout << sum << ' ' << cnt;
			return 0;
		}
		v.clear();
		while (sum > 0){
			v.pb(sum % 10);
			sum /= 10;
		}
	}
	return 0;
}