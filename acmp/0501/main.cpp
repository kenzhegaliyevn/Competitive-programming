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
const int MAXN = (int)1e2 + 1;

int n;
int a[MAXN], b[MAXN], c[MAXN], d[MAXN];
int x, y, xx, yy;
int ans;

int square(int xx1, int yy1, int xx2, int yy2, int xx3, int yy3, int xx4, int yy4){
	if (xx1 <= xx3 && xx3 <= xx2 && 
		xx1 <= xx4 && xx4 <= xx2 &&
		yy1 <= yy3 && yy3 <= yy2 &&
		yy1 <= yy4 && yy4 <= yy2)
		return (xx4 - xx3)*(yy4 - yy3);
		
	int x11 = max(min(xx1,xx2), min(xx3,xx4));
	int x12 = min(max(xx1,xx2), max(xx3,xx4));
	int y11 = max(min(yy1,yy2), min(yy3,yy4));
	int y12 = min(max(yy1,yy2), max(yy3,yy4));
	if (x12 - x11 > 0 && y12 - y11 > 0)
		return (x12 - x11) * (y12 - y11);
	return 0;
}

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d%d%d%d", &a[i], &b[i], &c[i], &d[i]);
	
	scanf ("%d%d%d%d", &x, &y, &xx, &yy);
	
	for (int i = 0; i < n; i++)
		ans += square(x, y, xx, yy, a[i], b[i], c[i], d[i]);
	printf ("%d\n", ans);
    return 0;
}
