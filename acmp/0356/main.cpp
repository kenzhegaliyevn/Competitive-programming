#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
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
const int oo = (int)1e9;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int dpmax[MAXN], dpmin[MAXN], e, f, n, w[MAXN], p[MAXN];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	scanf ("%d %d", &e, &f);
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d %d", &p[i], &w[i]);

	for (int i = 1; i <= f - e; i++)
		dpmax[i] = (-1)*oo;
	for (int i = 0; i <= f - e; i++){
		for (int k = 0; k < n; k++)
			if (i - w[k] >= 0) dpmax[i] = max(dpmax[i], dpmax[i - w[k]] + p[k]);
	}

	for (int i = 1; i <= f - e; i++)
		dpmin[i] = oo;
	for (int i = 0; i <= f - e; i++){
		for (int k = 0; k < n; k++)
			if (i - w[k] >= 0) dpmin[i] = min(dpmin[i], dpmin[i - w[k]] + p[k]);	
	}	

	if (dpmin[f - e] == oo || dpmax[f - e] == (-1)*oo){
		printf ("This is impossible.");
		return 0;
	}
	printf ("%d %d", dpmin[f - e], dpmax[f - e]);
	return 0;
}