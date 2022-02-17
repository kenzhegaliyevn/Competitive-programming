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
	ll n, v, k, i = 0, sum = 0;
	scanf ("%I64d %I64d %I64d", &n, &v, &k);
	while (i != n){
		if (v - i * k <= 0){
			printf ("NO %I64d", sum);
			return 0;
		}
		sum += (v - i * k);	
		i++;
	}
	printf ("YES %I64d", sum);
	return 0;
}