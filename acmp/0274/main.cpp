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

int a[10], b[10];

bool check(int p, int q){
    for (int i = 0; i < 10; i++)
    	a[i] = 0, b[i] = 0;
	while (p > 0){
		a[p % 10] = 1;
		p /= 10;
	}	
	while (q > 0){
		b[q % 10] = 1;
		q /= 10;
	}	
	for (int i = 0; i < 10; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}
int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, x, y;
	scanf("%d\n", &n);
	while (n--){
		scanf ("%d %d", &x, &y); 		
		if (check(x, y))
			printf ("YES\n");
		else
			printf ("NO\n");
	}
	return 0;
}