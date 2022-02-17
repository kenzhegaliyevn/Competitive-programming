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

int dp[100][100];

int f(int i, int j){
	if (i >= 0 && j >= 0) return dp[i][j];
	return 0;
}

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	string s;
	cin >> s;
	int n = sz(s);
	dp[0][0] = 1;
	for (int j = 1; j <= n; j++){
		for (int i = 0; i <= j; i++){	
			if (s[j - 1] == '?')
				dp[i][j] = f(i - 1, j - 1) + f(i + 1, j - 1);
			else if (s[j - 1] == '(')
				dp[i][j] = f(i - 1, j - 1);
			else
				dp[i][j] = f(i + 1, j - 1);	
		}
	}
/*	for (int i = 0; i <= n; i++){
		for (int j = 0; j <= n; j++)
			cout << dp[i][j] << ' ';
		cout << endl;
	}*/
	cout << dp[0][n];
	return 0;
}