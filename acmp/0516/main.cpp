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

int n, r;
string s;

int getNum(string a){
	int ans = 0;
	for (int i = 0; i < sz(a); i++) {
		ans *= 10;
		ans += (a[i] - '0');
	}
	return ans;
}

bool isPrime(int t){
	for (int i = 2; i <= sqrt(t); i++)
		if (t % i == 0)
			return 0;
			
	return 1;
}

int main(){
	cin >> s;
	sort(s.begin(), s.end());
	n = getNum(s);
	for (int i = 0; i < sz(s)/2; i++)
		swap(s[i], s[sz(s) - 1 - i]);
	r = getNum(s);
	
	if (isPrime(n) && isPrime(r))
		cout << "Yes\n";
	else
		cout << "No\n";
    return 0;
}
