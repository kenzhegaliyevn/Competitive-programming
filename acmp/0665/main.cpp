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
	int a, b, c, d;
	string s;
	cin >> s;
	a = s[0] - '0', b = s[1] - '0', c = s[3] - '0', d = s[4] - '0';
	while (true){
		if (d < 9)
			d++;
		else {
			d = 0;
			if (c < 5)
				c++;
			else {
				c = 0;
				if (b < 9){
					if (a < 2)
						b++;
					else {
						if (b < 3)
							b++;
						else { 
							b = 0;
							if (a < 2)
								a++;
							else
								a = 0;
						}
					}
				} else {
				 	b = 0;
				 	if (a < 2)
				 		a++;
					else 
						a = 0;
				}
			}
		}
//		cout << a << ' ' << b << ":" << c << ' ' << d << endl;
		if (a == d && b == c) {
			cout << a << b << ":" << c << d;
			return 0;
		}
    }
	return 0;
}