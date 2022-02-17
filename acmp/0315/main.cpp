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
int ans = 0;

int main(){
	getline(cin, s);
	for (int i = 0; i < sz(s); i++){
		if (s[i] >= '0' && s[i] <= '9')
			ans = max(ans, s[i] - '0');					
		else if (s[i] >= 'A' && s[i] <= 'Z')
			ans = max(ans, s[i] - 'A' + 10);
		else {
			cout << -1;
			return 0;		
		}
	}
	ans = (ans == 0) ? 2 : ans + 1;
	cout << ans;
	return 0;	
}
