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
 
const int MAXN = (int)3e4 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int n, ans, diff;
bool used[10];

bool check(int x){
	for (int i = 0; i < 10; i++)
		used[i] = 0;
		
	while (x){
		used[x % 10] = 1;
		x /= 10;
	}
	
	int cnt = 0;
	for (int i = 0; i < 10; i++){
		if (used[i])
			cnt++;		
	}
	
	if (cnt < 3) return 1;
	return 0;
}

int main(){
	scanf ("%d", &n);
	diff = MAXN;
	
	if (check(n)){
		printf ("%d\n", n);
		return 0;
	}
	
	for (int i = 1; i < n; i++)
		if (check(i)){
			if (n - i < diff){
				diff = n - i;
				ans = i;	
			}	
		}
	
	for (int i = n; i < MAXN; i++)
		if (check(i)){
			if (i - n < diff){
				diff = n - i;
				ans = i;	
			}
		}
	
	printf ("%d\n", ans);
	return 0;
}

