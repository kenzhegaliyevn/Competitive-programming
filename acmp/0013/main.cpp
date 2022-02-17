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

string s, t;
int k, b;

int main(){
	cin >> s >> t;
	for (int i = 0; i < sz(s); i++)
		if (s[i] == t[i])
			k++;
	for (int i = 0; i < sz(s); i++){
		for (int j = 0; j < sz(s); j++){
			if (i == j)
				continue;
			if (s[i] == t[j])
				b++;
		}
	}
	cout << k << ' ' << b << '\n';
	return 0;
}
