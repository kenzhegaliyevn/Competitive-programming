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

string s, t;

int getSum(string tmp){
	int ans = 0;
	for (int i = 0; i < sz(tmp); i++)
		ans = i % 2 ? (ans - (tmp[i] - '0')) : (ans + (tmp[i] - '0'));
	return ans;
}

int main(){
	cin >> s;
	
	for (int i = 0; i < sz(s) - 1; i++)
		t += s[i];
	
	int maxi = getSum(t);
	
	for (int i = 0; i < sz(s); i++) {
		t.clear();
		for (int j = 0; j < sz(s); j++) {
			if (i == j)
				continue;
			t += s[j];
		}
		maxi = max(maxi, getSum(t));
	}

	cout << maxi << '\n';			
    return 0;
}
