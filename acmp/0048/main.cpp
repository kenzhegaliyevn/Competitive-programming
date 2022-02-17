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

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	string s;
	cin >> s;
	int sum = 0;
	for (int i = 0; i < sz(s); i++)
		sum += (s[i] - '0');
	if (sum == 1){
		cout << s;
		return 0;
	}  
	int n = sz(s);
	int k = 0;
	while (n--){
		if (s[n] == '0')
			k++;
		else
			break;			
	}
	if (k > 0){
		cout << 1;
		for (int i = 0; i < k; i++)
			cout << 0;
	} else
		cout << 1;
	return 0;
}