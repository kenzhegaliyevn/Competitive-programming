#include <iostream>
#include <stdio.h>
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
  
const int MAXN = (int)1e9 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int n, l, r;
int res[3000];

int main(){
	scanf ("%d", &n);
	res[0] = 1;
	l = 1;
	for (int i = 1; i <= n; i++){
		for (int j = 0; j < l; j++)
			res[j] *= 2;		
		for (int j = 0; j < l; j++){
			res[j + 1] += res[j]/10;
			res[j] %= 10;
		}
		if (res[l] != 0)
			l++;
	}		
	reverse(res, res + l);
	for (int i = 0; i < l; i++)
		printf ("%d", res[i]);
	printf ("\n");
	return 0;
}
