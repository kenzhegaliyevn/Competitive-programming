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
 
const int MAXN = (int)1e8 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

ll ans;

int main(){
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);	
    int w, h;
    scanf ("%d %d", &w, &h);
    for (int i = 0; i <= w; i++)
		for (int j = 0; j <= h; j++)
			ans += (1ll*(w - i)*(h - j));
	printf ("%I64d", ans);
    return 0;
}
