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
const int MAXN = (int)1e4 + 1;

int n;
char c;

int main(){
	scanf ("%c%d", &c, &n);
	if (n + 2 >= 1 && n + 2 <= 8 && char(c + 1) >= 'a' && char(c + 1) <= 'h')
		printf ("%c%d\n", char(c + 1), n + 2);
		
	if (n + 2 >= 1 && n + 2 <= 8 && char(c - 1) >= 'a' && char(c - 1) <= 'h')
		printf ("%c%d\n", char(c - 1), n + 2);
		
	if (n - 2 >= 1 &&  n - 2 <= 8 && char(c + 1) >= 'a' && char(c + 1) <= 'h')
		printf ("%c%d\n", char(c + 1), n - 2);
		
	if (n - 2 >= 1 &&  n - 2 <= 8 && char(c - 1) >= 'a' && char(c - 1) <= 'h')
		printf ("%c%d\n", char(c - 1), n - 2);
		
	if (n + 1 >= 1 &&  n + 1 <= 8 && char(c + 2) >= 'a' && char(c + 2) <= 'h')
		printf ("%c%d\n", char(c + 2), n + 1);
		
	if (n + 1 >= 1 && n + 1 <= 8 && char(c - 2) >= 'a' && char(c - 2) <= 'h')
		printf ("%c%d\n", char(c - 2), n + 1);
		
	if (n - 1 >= 1 && n - 1 <= 8 && char(c + 2) >= 'a' && char(c + 2) <= 'h')
		printf ("%c%d\n", char(c + 2), n - 1);
		
	if (n - 1 >= 1 && n - 1 <= 8 && char(c - 2) >= 'a' && char(c - 2) <= 'h')
		printf ("%c%d\n", char(c - 2), n - 1);
    return 0;
}
