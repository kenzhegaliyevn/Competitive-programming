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


int n, ansI, ansIII, ansV;
int a[10];
int V[10], III[10], I[10], ans[10];

int main(){
	scanf("%d", &n);
	for (int j = 0; j < n; j++)
		scanf("%d", &a[j]);
	
	V[0] = a[0];
	ansV = V[0];
	
	for (int j = 1; j < n; j++) {
		V[j] = V[j - 1] + a[j];
		ansV += V[j];		
	}
	ans[5] = ansV;

	reverse(a, a + n);
	III[0] = a[0];
	ansIII = III[0];
	for (int j = 1; j < n; j++) {
		III[j] = III[j - 1] + a[j];
		ansIII += III[j];
	}
	ans[3] = ansIII;
	
	sort(a, a + n);	
	I[0] = a[0];
	ansI = I[0];
	for (int j = 1; j < n; j++) {
		I[j] = I[j - 1] + a[j];
		ansI += I[j];
	}
	ans[1] = ansI;
	
	int mini = min(ansI, min(ansIII, ansV));
	for (int j = 0; j < 6; j++)
		if (mini == ans[j]) {
			printf("%d\n", j);
			return 0;
		}
}
