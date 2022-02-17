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
typedef long long ll;
  
typedef vector<int> vi;                                                       
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
  
string s;
int n, used[27];
char a[27];
map <string, int> m;
      
void rec(int v) {
    if (v == sz(s)) {       
    	string tmp = "";
        for (int i = 0; i < sz(s); i++)
        	tmp += a[i];
		if (m[s] == 0) {
			cout << tmp << '\n';
			m[s] = 1;
		}			
        return;
    }                       
    for (int x = 0; x < sz(s); x++)
        if (used[x] == 0) {
            a[v] = s[x];
            used[x] = 1;
            rec(v + 1);
            used[x] = 0;
        }
}
  
int main(){
    freopen ("input.txt", "r", stdin);  
    freopen ("output.txt", "w", stdout);    
    cin >> s;
    rec(0);     
    return 0;
}