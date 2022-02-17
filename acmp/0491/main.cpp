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
const int oo = (int)1e9 + 1;
const int mod = (int)1e9 + 7;
const int maxn = (int)1e5 + 1;

string s;

bool check(string s){
	for (int i = 0; i < sz(s)/2; i++)
		if (s[i] != s[sz(s) - 1 - i])
			return 0;
	return 1;	
}

int main(){
	cin >> s;
	if (!check(s))
		cout << s << '\n';
	else {
		bool same = 1;
		for (int i = 0; i < sz(s) - 1; i++)
			if (s[i] != s[i + 1]) {
				same = 0;
				break;
			}
		if (same)
			cout << "NO SOLUTION\n";
		else {
			for (int i = 0; i < sz(s) - 1; i++)
				cout << s[i];
		}
	}
    return 0;
}
