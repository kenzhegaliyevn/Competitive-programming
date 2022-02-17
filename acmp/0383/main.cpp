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
 
const int MAXN = (int)1e7 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int n;
vi v;

int getNumberOfDigits(int t){
	int tmp = 0;
	while(t){
		tmp++;
		t /= 10;
	}
	return tmp;
}

int getSumOfDigits(int t){
	int tmp = 0;
	while(t){
		tmp += t % 10;
		t /= 10;
	}
	return tmp;
}

int main(){
	scanf ("%d", &n);
	int i = 1;
	while (true){
//		printf ("%d %d\n", getSumOfDigits(i), getNumberOfDigits(i));
		if (getSumOfDigits(i) % getNumberOfDigits(i) == 0)
			v.pb(i);
		if (sz(v) == n){
			printf ("%d\n", v[n - 1]);
			return 0;
		}
		i++;
	}
    return 0;
}
