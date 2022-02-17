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

int cnt, x, y;
int a[5];

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	for (int i = 0; i < 5; i++){
		scanf("%d %d", &x, &y);
		for (int j = 0; j <= 100; j += 25){
			if ((x - j) * (x - j) + y * y <= 100)
				a[j/25] = 1;
		}
	}
	for (int i = 0; i < 5; i++)
		cnt += a[i];
	printf ("%d", cnt);
	return 0;
}