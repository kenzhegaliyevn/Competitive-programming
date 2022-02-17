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

int n, x;
int a[110], b[110], c[110];
int cnt;
 
int main(){
	scanf ("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf ("%d", &a[i]);
		b[i] = i;
	}
	while (true){
		cnt++;
		for (int i = 1; i <= n; i++)
			c[a[i]] = b[i];
		for (int i = 1; i <= n; i++)
			b[i] = c[i];			
		bool ok = 0;
		for (int i = 1; i <= n; i++){
			if (b[i] - i == 0) continue;
			ok = 1;			
		}
		if (ok == 0)
			break;
	}	
	printf ("%d\n", cnt);
	return 0;
}
