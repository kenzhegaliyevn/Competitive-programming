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

int a[101], b[101];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, k, x;
	scanf ("%d\n", &n);
	for (int i = 1; i <= n; i++) 	
		scanf ("%d", &a[i]);
	scanf ("%d\n", &k);
	for (int i = 0; i < k; i++){ 	
		scanf ("%d", &x);
		b[x]++;
	}
	for (int i = 1; i <= n; i++){
		if (a[i] < b[i])
			printf ("yes\n");
		else
			printf ("no\n");
	}
	return 0;
}