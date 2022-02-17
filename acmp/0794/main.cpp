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
 
int n, m, k;
int bad1, bad2, ans;
 
int main(){
    scanf ("%d%d%d", &n, &m, &k);
    bad1 = 1/k;
    bad2 = 1 % k;
     
    for (int i = 2; i <= m; i++) {
    		bad1 = max(bad1, i/k);
    		bad2 = max(bad2, i % k);
    }
     
    printf ("%d", (bad1 + bad2) * n);
    return 0;
}
