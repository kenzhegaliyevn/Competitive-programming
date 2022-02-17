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
	int n;
	scanf ("%d", &n);
	if (n % 5 == 0){
		printf ("%d %d", n/5, 0);
		return 0;
	}
	int t = n/5, k = n % 5;
	while (true){
		if (k % 3 == 0){
		   	printf ("%d %d", t, k/3);
		   	return 0;
		} else 
			t--, k += 5;
   	}
	return 0;
}