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
   
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
const int MAXN = (int)1e6 + 7;
//const int mod = (int)1e9 + 7;
 
int n;
int a[MAXN];
map <int, int> m;
int mx, t;
 
int main(){
	scanf ("%d", &n);
	for (int i = 0; i < n; i++){
		scanf ("%d", &a[i]);
		m[a[i]]++;
	}
	for (int i = 0; i < n; i++){
		if (m[a[i]] == mx){
			if (a[i] < t)
				t = a[i];	
		} else if (m[a[i]] > mx){
			mx = m[a[i]];
			t = a[i];
		}	
	}
	for (int i = 0; i < n; i++)
		if (a[i] != t)
			printf ("%d ", a[i]);
	for (int i = 0; i < mx; i++)
		printf ("%d ", t);
    return 0;
}
