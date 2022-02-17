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
  
const int MAXN = (int)1e8 + 1;
typedef long long ll;
  
typedef vector<int> vi;                                                       
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
 
vector <string> vs, ans1, ans2;

int main(){
    freopen ("input.txt", "r", stdin);  
    freopen ("output.txt", "w", stdout);    
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < 2*n; i++){
		cin >> s;
		vs.pb(s);
    }
    for (int i = 0; i < sz(vs); i++){
		string tmp = vs[i];
		bool ok = 1;
		for (int j = 1; j < sz(tmp); j++){
		    for (int k = 0; k < sz(vs); k++){
		    	string t = vs[k];
		    	if (tmp != t){
		        	if (tmp[j] == t[0])	
		        		ok = 1;
					else{
						ok = 0;
						break;					
					}
		    	} else
		    		continue;
		    }
		}
		if (ok){
			ans1.pb(tmp);
			for (int j = 1; j < sz(tmp); j++){
			    for (int k = 0; k < sz(vs); k++){
			    	string t = vs[k];
			    	if (tmp != t){
			        	if (tmp[j] == t[0])	
			        		d
				    } else
		    			continue;
		    	}
			}
		}	
    }
    return 0;
}
