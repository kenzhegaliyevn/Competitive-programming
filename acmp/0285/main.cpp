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

int n, m, sum, total, maxi;
int a[1001];

int main(){
	scanf ("%d%d", &n, &m);
	for (int i = 0; i < n; i++){
		scanf ("%d", &a[i]);
		maxi = max(maxi, a[i]);
	}
	
	for (int i = 0; i < n; i++)
		if (a[i] > m) {
			printf ("no\n");
			return 0;
		}

	for (int i = 0; i < n; i++)
		sum += a[i];
	
	total = sum - n + 1;
// если максимальная длительность горения польев больше
// отведенного времени (total), при этом самая большая (maxi) длительность
// горения полена меньше отведенного времени, то можно
// расположить поленья так, чтобы в сумме получилась искомая
// длительность горения костра	

	if (total >= m && maxi <= m)
		printf ("yes\n");
	else
		printf ("no\n");
    return 0;
}
