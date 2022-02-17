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

string t = "ABCEHKMOPTXY", tt = "1234567890";

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n;
	cin >> n;
	while (n--){
		string s;
		cin >> s;
		int pos1 = -1, pos2 = -1, pos3 = -1, pos4 = -1, pos5 = -1, pos6 = -1;
		pos1 = t.find(s[0]);
		pos2 = t.find(s[4]);
		pos3 = t.find(s[5]);
		pos4 = tt.find(s[1]);
		pos5 = tt.find(s[2]);
		pos6 = tt.find(s[3]);
		if (sz(s) > 6) {
			if (n != 0)
				cout << "No\n";
			else
				cout << "No";
		} else {
			if (pos1 != -1 && pos2 != -1 && pos3 != -1 && pos4 != -1 && pos5 != -1 && pos6 != -1){
				if (n != 0)
					cout << "Yes\n";
				else
					cout << "Yes";
			} else {
				if (n != 0)
					cout << "No\n";
				else
					cout << "No";
			}
		}
	}
	return 0;
}