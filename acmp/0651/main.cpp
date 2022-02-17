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

vi vn, vm;

void f(int a, vi &v){
	int k = 2;
	while (k <= sqrt(double(a))){	
		if (a % k == 0){
			v.pb(k);
			a /= k;
		} else 
			k++;
	}
	if (a > 1)
		v.pb(a);
}

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, m;
	scanf ("%d %d", &n, &m);
	if (n == m) {
		printf ("%d", 0);
		return 0;
	}
	f(n, vn);
	f(m, vm);

	for (int i = 0; i < vm.size(); i++){
		vi::iterator it = find(vn.begin(), vn.end(), vm[i]);
		if (it != vn.end()){
			vn.erase(it);
			vm.erase(vm.begin() + i);
			i = -1;
		}
	}
	printf ("%d", vn.size() + vm.size());
	return 0;
}