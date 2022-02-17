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
 
const int MAXN = (int)3e4 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int n;
vi v, vv;
bool used[30010];
int x;

void primes(){
	for (int i = 2; i < 30001; i++)
		used[i] = 1;
	
	for (int i = 2; i < 30001; i++){
		if (used[i]){
			used[i] = 0;
			if (i < 9)
				v.pb(i);
			else {
				int tmp = i;
				vv.clear();
				while (tmp){
					vv.pb(tmp % 10);
					tmp /= 10;
				}
				for (int q = sz(vv) - 1; q >= 0; q--)
					v.pb(vv[q]);
			}
			for (long long j = (long long) i * i; j <= 30001; j += i)
				used[j] = 0;
		}
	}	
}

int main(){
	scanf ("%d", &n);
	primes();
	for (int i = 0; i < n; i++){
		scanf ("%d", &x);
		printf ("%d", v[x - 1]);
	}
	return 0;
}

