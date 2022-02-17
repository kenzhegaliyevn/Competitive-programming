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
 
int n;
bool used[15];
//char a[15];
stack <char> st;
 
void rec(int v, string &a){
    if (v == n){
        if (st.empty() == 0) return;
        cout << a << '\n';
//        printf("%s\n", a);
        return;     
    }
    st.push('(');
    a[v] = '(';
    rec(v + 1, a);
    st.pop();
    if (!st.empty() && st.top() == '('){
        st.pop();
        a[v] = ')';
        rec(v + 1, a);
        st.push('(');
    }             
}
int main(){
    scanf ("%d", &n);    
	string a(n, ' ');
	cout << n << '\n';
    rec(0, a);
    return 0;
}
  
