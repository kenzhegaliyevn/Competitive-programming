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
	int n, a1, a2, a3, a4, a5, a6, a7, a8, b1, b2, b3, b4, t;
	double v, maxi = 0.0;
	char c;  
	string s = "", tmp = "", ans = "", f;
	cin >> n;
	scanf ("\n");
	while (n--){
		a1 = -1, a2 = -1, a3 = -1, a4 = -1, a5 = -1, a6 = -1, a7 = -1, a8 = -1;
		b1 = 0, b2 = 0, b3 = 0, b4 = 0;
		tmp = "";
		getline(cin, s);
		tmp += s[0];
		int i = 1;
		while (s[i] != 34)
			tmp += s[i], i++;
		tmp += s[i];
		for (int j = i; j < sz(s); j++) {
			if (s[j] >= '0' && s[j] <= '9'){
				if (a1 == -1)
					a1 = s[j] - '0';
				else if (a2 == -1)
					a2 = s[j] - '0';
				else if (a3 == -1)
					a3 = s[j] - '0';
				else if (a4 == -1)
					a4 = s[j] - '0';
				else if (a5 == -1)
					a5 = s[j] - '0';
				else if (a6 == -1)
					a6 = s[j] - '0';
				else if (a7 == -1)
					a7 = s[j] - '0';
				else 
					a8 = s[j] - '0';
			}
		}
		b1 = a1 * 10;
		b1 += a2;	

		b2 = a3 * 10;
		b2 += a4;	

		b3 = a5 * 10;
		b3 += a6;	

		b4 = a7 * 10;
		b4 += a8;	
//		printf ("%d %d %d %d\n", b1, b2, b3, b4);
		if (b4 - b2 >= 0){
			b4 -= b2;
			b3 -= b1;
			if (b3 < 0)
				b3 += 24;
						
		} else {
			b2 = 60 - b2;
//			printf ("b1 = %d b2 = %d b3 = %d b4 = %d\n", b1, b2, b3, b4);
			if (b1 + 1 == 24)
				b1 = 0;
			else
				b1 += 1;
//			printf ("b1 = %d b2 = %d b3 = %d b4 = %d\n", b1, b2, b3, b4);
			b4 = b4 + b2;
//			printf ("b1 = %d b2 = %d b3 = %d b4 = %d\n", b1, b2, b3, b4);
			if (b3 - b1 < 0)
				b3 = b3 - b1 + 24;
			else
				b3 = b3 - b1;
//			printf ("b1 = %d b2 = %d b3 = %d b4 = %d\n", b1, b2, b3, b4);
			if (b4 >= 60)
				b3 += (b4/60), b4 %= 60;
//			printf ("b1 = %d b2 = %d b3 = %d b4 = %d\n", b1, b2, b3, b4);
		}
		if (b3 == 0 && b4 == 0)
			b3 = 24;
//		printf ("HH = %d MM = %d\n", b3, b4);
		v = (650.0 * 60.0)/(b3 * 60 + b4);
//		printf ("V = %d\n", v);
		if (v > maxi)
			maxi = v, ans = tmp;
	}
	cout << "The fastest train is " << ans << '.' << endl;
	cout << "It's speed is " << (int)(maxi + 0.5) << " km/h, approximately.";
	return 0;
}