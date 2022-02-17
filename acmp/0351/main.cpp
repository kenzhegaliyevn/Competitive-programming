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

const int MAXN = (int)1e5 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int dp[MAXN], lastpos[100];
int n, k;
string s;

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	cin >> n >> k >> s;
//	memset(lastpos, -1, sizeof(lastpos));
	for (int i = 0; i < 100; i++)
		lastpos[i] = -1;		
	dp[0] = 0;
	lastpos[s[0]] = 0;
	for (int i = 1; i < n; i++){
		if (lastpos[s[i]] >= max(0, i - k))
			dp[i] = dp[lastpos[s[i]]];
		else
			dp[i] = *min_element(dp + max(0, i - k), dp + i) + 1;
		lastpos[s[i]] = i;
	}
	cout << dp[n - 1];
	return 0;
}