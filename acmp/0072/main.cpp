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
typedef long long ll;
 
typedef vector<int> vi;                                                       
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
 
string s;
string getNext(string t){
	int j = sz(t) - 2;
  	while (j != -1 && t[j] >= t[j+1]) j--;
  	int k = sz(s) - 1;
  	while (t[j] >= t[k]) k--;
  	swap(t[j], t[k]);
  	int l = j + 1, r = sz(t) - 1;
  	while (l < r)
    		swap(t[l++], t[r--]);
    	return t;
}

int main(){
	cin >> s;
	cout <<	getNext(s) << '\n';
    return 0;
}
