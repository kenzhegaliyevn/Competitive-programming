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

int a[101];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, s;
	scanf ("%d %d", &n, &s);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	sort(a, a + n);
	int cnt = 0;
	for (int i = 0; i < n; i++){
		if (s - a[i] >= 0){
			cnt++;
			s -= a[i];
		} else 
			break;
	}
	printf ("%d", cnt);
	return 0;
}