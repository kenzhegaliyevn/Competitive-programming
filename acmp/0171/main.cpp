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
typedef long long ll;
  
typedef vector<int> vi;                                                       
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
 
vi v;

bool isprime(int a){
	for (int i = 2; i <= (int)sqrt(a); i++)
		if (a % i == 0)
			return 0;
	return 1;
}
int main(){
    freopen ("input.txt", "r", stdin);  
    freopen ("output.txt", "w", stdout);    
    ll n;
    scanf ("%lld", &n);
    for (int i = 2; i <= 1000; i++)
    	if (isprime(i))
    		v.pb(i);
	int cnt = 0, sum = 1, t = 0;
	while(true){
		if (n == 1){
			sum *= (cnt + 1);
			break;
		}
		if (n % v[t] == 0)
			cnt++, n /= v[t];
		else
			sum *= (cnt + 1), cnt = 0, t++;
    }		
	printf ("%d", sum);
    return 0;
}
