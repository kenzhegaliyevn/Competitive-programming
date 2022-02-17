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
	int k1, l1, m1, k2, l2, m2;
	scanf ("%d %d %d\n %d %d %d", &k1, &l1, &m1, &k2, &l2, &m2);
	int x = k1 - k1 * l1/100;
	int y = k2 - k2 * l2/100;
	int mini = min(x, y);
	printf ("%d", (k1 - mini) * m1 + (k2 - mini) * m2);
	return 0;
}