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

int k, ans;

bool check(int a, int b){
	int r = 0;
	while (a){
		r *= 10;
		r += a%10;
		a /= 10;
	}
	if (r == b)
		return 1;
	return 0;
}

int main(){
	scanf ("%d", &k);
	for (int i = 1; i < k; i++){
		if (check(i, k - i))
			ans++;	
	}
	printf ("%d", ans);
    return 0;
}
