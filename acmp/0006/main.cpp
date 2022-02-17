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
	string s;
	cin >> s;
	if (sz(s) == 5 && s[2] == '-' && s[0] >= 'A' && s[0] <= 'H' && s[1] >= '1' && s[1] <= '8' && s[3] >= 'A' && s[3] <= 'H' && s[4] >= '1' && s[4] <= '8'){
		if ((abs(s[1] - s[4]) == 2 && abs(s[0] - s[3]) == 1) || (abs(s[1] - s[4]) == 1 && abs(s[0] - s[3]) == 2))			
			cout << "YES";
		else
			cout << "NO";
	} else 
		cout << "ERROR";
	return 0;
}