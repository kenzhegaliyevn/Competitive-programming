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

int joseph(int n, int k){
	return n > 1 ? (joseph(n - 1, k) + k - 1) % n + 1 : 1;
}
int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, k;
	scanf ("%d %d", &n, &k);
	printf ("%d", joseph (n, k));
	return 0;
}