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

int a, b, c, d;
int ans;

int main(){
	scanf ("%d%d%d%d", &a, &b, &c, &d);
	
	while (true){
		if (a == c && b == d)
			break;
		b++;
		if (b == 30)
			ans++;
		if (b == 60){
			b = 0;
			a++;
			if (a > 12)
				ans += (a - 12);
			else
				ans += a;
			if (a == 24)
				a = 0;
		}
	}
	printf ("%d", ans);
    return 0;
}
