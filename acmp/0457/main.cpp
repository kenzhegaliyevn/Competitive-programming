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


int v[5], u[5];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, tmp = 0, a, k = 0;
	scanf ("%d", &n);
	while (true){
		v[0] = n % 10;
		v[1] = n/10 % 10;
		v[2] = n/100 % 10;
		v[3] = n/1000 % 10;
		sort(v, v + 4); 
		a = v[0]*1000 + v[1]*100 + v[2]*10 + v[3]; 
		tmp = v[3]*1000 + v[2]*100 + v[1]*10 + v[0]; 
		tmp = tmp - a;
		if (n == tmp)
			break;
		else
			n = tmp;
		k++;
	}
	printf ("%d\n%d", n, k);
	return 0;
}