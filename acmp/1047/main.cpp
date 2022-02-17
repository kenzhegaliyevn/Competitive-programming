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
const int MAXN = (int)1e4 + 1;

int n, a[15][15];


int solve(int n, int a[15][15]){
	int tmp[15];
	for (int i = 0; i < n; i++)
		tmp[i] = i;
		
	int minAns = INT_MAX;
	
	do{
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += a[i][tmp[i]];
		minAns = min(minAns, sum);					
	}while (next_permutation(tmp, tmp + n));	
	return minAns;
}

int main(){
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf ("%d", &a[i][j]);	
	printf ("%d\n", solve(n, a));
    return 0;
}
