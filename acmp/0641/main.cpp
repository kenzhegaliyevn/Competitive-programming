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

string s, maxi;

void compare(int i, int j){
	string tmp = "";
	for (int k = 0; k < sz(s); k++){
		if (k == i || k == j)
			continue;
		tmp += s[k];
	}
	for (int t = 0; t < sz(tmp); t++){
		if (tmp[t] > maxi[t]){
			maxi = tmp;
			break;
		} else if (tmp[t] < maxi[t])
			break;
		else
			continue;
	}	
}
int main(){
	cin >> s;	
	for (int i = 0; i < sz(s) - 2; i++)
		maxi += s[i];
	
	for (int i = 0; i < sz(s); i++){
		for (int j = 0; j < sz(s); j++){
			if (i != j)
				compare(i, j);			
		}
	}
	cout << maxi << '\n';
	return 0;
}
