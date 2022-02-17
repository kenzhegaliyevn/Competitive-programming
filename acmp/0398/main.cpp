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

int n, ans;

int main (){
	scanf ("%d", &n);
	for (int i = 1; i <= n/4; i++){
		for (int j = i; j <= n/3; j++){
			for (int k = j; k <= n/2; k++){
				if (n - i - j - k >= k)
					ans++;			
			}
		}
	}
	printf ("%d", ans);
	return 0;
}
