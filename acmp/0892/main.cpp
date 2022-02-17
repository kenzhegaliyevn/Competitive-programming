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

int n;

int main(){
	scanf ("%d", &n);
	if (n == 1 || n == 2 || n == 12)
		printf ("Winter\n");
	else if (n >= 3 && n <= 5)
		printf ("Spring\n");
	else if (n >= 6 && n <= 8)
		printf ("Summer\n");
	else if (n >= 9 && n <= 11)
		printf ("Autumn\n");
	else 
		printf ("Error\n");			
    return 0;
}
