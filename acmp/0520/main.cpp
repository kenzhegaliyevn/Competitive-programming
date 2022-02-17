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


int n;
int ansk, anss, ansp;

int main(){
	scanf ("%d", &n);
	int k = n/144;
	n %= 144;
	
	int s = n/12;
	n %= 12;
	
	int p = n;
	
	if (p * 10.5 > 102.5) {
		p = 0;
		s++;
	}
		
	if (s * 102.5  + p * 10.5 > 1140) {
		p = 0;
		s = 0;
		k++;
	}
		
	printf ("%d %d %d\n", k, s, p);
	
	return 0;
}

