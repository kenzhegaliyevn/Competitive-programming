#include <iostream>
#include <stdio.h>
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
  
const int MAXN = (int)1e9 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

string s, t;
vi sa, ta, maxi, mini;
bool ok;

void azaitu(){
	int ls = sz(maxi);
	int lt = sz(mini);
	if (ls > lt)
		ok = 1;
	else if (ls == lt){
		for (int i = 0; i < ls; i++){
			if (maxi[i] > mini[i]){
				ok = 1;
				break;
			}
			if (maxi[i] < mini[i]){
				ok = 0;
				break;
			}
		}
	}
	reverse(maxi.begin(), maxi.end());
	reverse(mini.begin(), mini.end());
	
	if (!ok){
		for (int i = 0; i < lt - ls; i++)
			maxi.pb(0);
		for (int i = 0; i < lt; i++)
			swap(maxi[i], mini[i]);				
	}	
	if (ok){
		for (int i = 0; i < ls - lt; i++)
			mini.pb(0);		
	}
	
	for (int i = 0; i < sz(maxi); i++){
		maxi[i] -= mini[i];
		if (maxi[i] < 0){
			maxi[i] += 10;
			maxi[i + 1]--;
		}	
	}
	reverse(maxi.begin(), maxi.end());
	
	while (sz(maxi) > 1 && maxi[0] == 0)
		maxi.erase(maxi.begin());
	if (!ok)
		maxi[0] *= (-1);
	for (int i = 0; i < sz(maxi); i++)
		cout << maxi[i];
	cout << '\n';
}

int main(){
	cin >> s >> t;
	for (int i = 0; i < sz(s); i++)
		sa.pb(s[i] - '0');
	for (int i = 0; i < sz(t); i++)
		ta.pb(t[i] - '0');
	maxi = sa;
	for (int i = 0; i < sz(t); i++)
		mini.pb(9);
		
	for (int i = 0; i < sz(s); i++){
		for (int j = 0; j < sz(s); j++){
			if (maxi[j] < sa[j])
				maxi = sa;
			else if (maxi[j] > sa[j])
				break;
		}
		int tmp = sa[0];
		sa.pb(tmp);
		sa.erase(sa.begin());
	}
	for (int i = 0; i < sz(t); i++){		
		for (int j = 0; j < sz(t); j++){
			if (mini[j] < ta[j] || ta[0] == 0)
				break;
			if (mini[j] > ta[j])
				mini = ta;
		}
		int tmp = ta[0];
		ta.pb(tmp);
		ta.erase(ta.begin());
	}
	azaitu();	
	return 0;
}
