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
 
const int MAXN = (int)1e7 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int n;
vi v;

void getDividers(int t){
	v.pb(1);
	v.pb(t);
	for (int i = 2; i <= sqrt(t); i++)
		if (t % i == 0){
			v.pb(i);
			if (i != t/i)
				v.pb(t/i);	
		}
}
int getSum(int x){
	int tmp = 0;
	while (x){
		tmp += x % 10;
		x /= 10;
	}
	return tmp;
}

int main(){
	scanf ("%d", &n);
	getDividers(n);
	int ans = 1;
	int sum = 1;	
//	for (int i = 0; i < sz(v); i++)
//		printf ("%d ", v[i]);
//	printf ("\n");
	for (int i = 1; i < sz(v); i++){
		if (sum < getSum(v[i])) {
			sum = getSum(v[i]);
			ans = v[i];
		} else if (sum == getSum(v[i])) {
			if (ans < v[i])
				continue;
			ans = v[i];
			sum = getSum(v[i]);
		}
	}
	printf ("%d\n", ans);
    return 0;
}
