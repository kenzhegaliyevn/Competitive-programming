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

int n;
vi v;

void toBinary(int n){
	while (n){
		v.pb(n % 2);
		n /= 2;
	}
	v.pb(0);
	reverse(v.begin(), v.end());
}

ll getNext(){
	int j = 	sz(v) - 2;
	while (j != -1 && v[j] >= v[j + 1]) j--;
	int k = sz(v) - 1;
	while (v[j] >= v[k]) k--;
	swap(v[j], v[k]);
	int l = j + 1;
	int r = sz(v) - 1;
	while (l < r)
		swap(v[l++], v[r--]);
	ll ans = 0;
	reverse(v.begin(), v.end());
	for (int i = 0; i < sz(v); i++)
		ans += v[i]*(1ll<<i);
	return ans;
}

int main(){
	scanf ("%d", &n);
	toBinary(n);
	//cout << next_permutation(v.begin(), v.end());
	printf ("%lld\n", getNext());
    return 0;
}
