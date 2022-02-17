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

string s, tmp;

int main(){
	cin >> s;
	if (s[0] < 'A' || s[0] > 'Z'){
		cout << "No\n";
		return 0;
	}
	tmp = s[0];
	for (int i = 1; i < sz(s); i++){
		if (s[i] >= 'a' && s[i] <= 'z')
			tmp += s[i];
		else {
			if (sz(tmp) == 1 || sz(tmp) > 4){
				cout << "No\n";
				return 0;
			}	
			tmp = s[i];	
		}
	}	
	if (sz(tmp) >= 2 && sz(tmp) < 5)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}
