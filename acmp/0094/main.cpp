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
    int n, m, k, cnt = 0;
    scanf ("%d %d %d", &n, &m, &k);
    if (m - n == 0){
        printf ("%d", 1);
        return 0;
    }
    if (m <= m - n + k){
        printf ("NO");
        return 0;
    }
    while (true){
        cnt++;
        m -= n;
        if (m < 1){
            printf ("%d", cnt);
            return 0;
        }
        m += k;
    }   
    return 0;
}