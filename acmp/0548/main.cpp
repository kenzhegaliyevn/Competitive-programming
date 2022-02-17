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

	string s, t, ans = "";
	int i = 0, j = 0, a, b;
	cin >> s >> t;
	while (i < sz(s) && j < sz(t)){
		if (s[i] == t[j]){
			if (s[i + 1] < t[j + 1]){
				ans += s[i];
				ans += s[i + 1];
				i = i + 2;
			} else if (s[i + 1] > t[j + 1]){
				ans += t[j];
				ans += t[j + 1];
				j = j + 2;
			} else
				ans += s[i], i++;
		} else if (s[i] < t[j])
			ans += s[i++];
		else 
			ans += t[j++];
		cout << ans << ' ' << i << ' ' << j << endl;
	}
	cout << i << ' ' << j << endl;

	if (i == sz(s)){
		for (int a = j; a < sz(t); a++)
			ans += t[a];
	} 
	if (j == sz(t)){
		for (int a = i; a < sz(s); a++)
			ans += s[a];
	}
	cout << ans;
	return 0;
}