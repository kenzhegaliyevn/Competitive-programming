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

int a[101], b[101];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, ans = 0;
	double tmp = 0;
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d ", &a[i]);
	for (int i = 0; i < n; i++)
		scanf ("%d ", &b[i]);
	for (int i = 0; i < n; i++){
//		cout << (a[i] * b[i] + 0.0)/100.0 << endl;		
		if (tmp < (a[i] * b[i] + 0.0)/100.0){
			tmp = (a[i] * b[i] + 0.0)/100.0;
			ans = i;
		} else if (tmp == (a[i] * b[i] + 0.0)/100.0){
			tmp = (a[i] * b[i] + 0.0)/100.0;
			ans = min(ans, i);
		}
	}
	printf ("%d", ans + 1);
	return 0;
}