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

int a[3], b[3];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int a1, b1, c1, a2, b2, c2;
	for (int i = 0; i < 3; i++)
		scanf ("%d\n", &a[i]);
	for (int i = 0; i < 3; i++)
		scanf ("%d", &b[i]);
	sort(a, a + 3);
	sort(b, b + 3);
	a1 = a[0], b1 = a[1], c1 = a[2];
	a2 = b[0], b2 = b[1], c2 = b[2];

	if (a1 == a2 && b1 == b2 && c1 == c2)
		printf ("Boxes are equal");
	else if (a1 >= a2 && b1 >= b2 && c1 >= c2)  	
		printf ("The first box is larger than the second one");		
	else if (a1 <= a2 && b1 <= b2 && c1 <= c2)
		printf ("The first box is smaller than the second one");		
	else 
		printf ("Boxes are incomparable");		
	return 0;
}