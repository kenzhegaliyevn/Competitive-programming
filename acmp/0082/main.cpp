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
   
int n, m, x;
int used[maxn];
   
int main(){
    scanf ("%d%d", &n, &m);
    for (int i = 0; i < n; i++){
        scanf ("%d", &x);
        used[x] = 1;
    }
    for (int i = 0; i < m; i++){
        scanf ("%d", &x);
      	if (used[x] == 1)
          	used[x] = 2;
    }
    
    for (int i = 0; i < maxn; i++){
        if (used[i] == 2)
            printf ("%d ", i);
    }
    return 0;
}
