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
 
 
int n;
double a[1010];
string s[1010];
int pos[1010];

void bubleSort(){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                swap(a[i], a[j]);
                swap(s[i], s[j]);               
                swap(pos[i], pos[j]);
            } else if (a[i] == a[j]){
            		if (pos[i] > pos[j]){
            			swap(pos[i], pos[j]);
            			swap(s[i], s[j]);
            			swap(a[i], a[j]);
            		}
            }
        }
    }
}
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i] >> s[i];
        if (s[i] == "g"){ 
        		pos[i] = i;
        		continue;
        	}
        if (s[i] == "mg")
            a[i] = a[i] * 0.001;
        if (s[i] == "kg")
            a[i] = a[i] * 1000;
        if (s[i] == "Mg")
            a[i] = a[i] * 1000000;
        if (s[i] == "Gg")
            a[i] = a[i] * 1000000000;
 
        if (s[i] == "p")
            a[i] = a[i] * 16380;
        if (s[i] == "mp")
            a[i] = a[i] * 16380 * 0.001;        
        if (s[i] == "kp")
            a[i] = a[i] * 16380 * 1000;     
        if (s[i] == "Mp")
            a[i] = a[i] * 16380 * 1000000;      
        if (s[i] == "Gp")
            a[i] = a[i] * 16380 * 1000000000;   
             
        if (s[i] == "t")
            a[i] = a[i] * 1000000;
        if (s[i] == "mt")
            a[i] = a[i] * 1000;
        if (s[i] == "kt")
            a[i] = a[i] * 1000000000;
        if (s[i] == "Mt")
            a[i] = a[i] * 1000000000000;
        if (s[i] == "Gt")
            a[i] = a[i] * 1000000000000000;	
		pos[i] = i;        
    }
    bubleSort();
    for (int i = 0; i < n; i++){
        if (s[i] == "g"){
            cout << a[i] << ' ' << s[i] << endl;
            continue;           
        }
        if (s[i] == "mg")
            a[i] = a[i] * 1000;
        if (s[i] == "kg")
            a[i] = a[i]/1000;
        if (s[i] == "Mg")
            a[i] = a[i]/1000000;
        if (s[i] == "Gg")
            a[i] = a[i]/1000000000;
 
        if (s[i] == "p")
            a[i] = a[i]/16380;
        if (s[i] == "mp")
            a[i] = a[i]/16380 * 1000;       
        if (s[i] == "kp")
            a[i] = (a[i]/16380)/1000;       
        if (s[i] == "Mp")
            a[i] = (a[i]/16380)/1000000;        
        if (s[i] == "Gp")
            a[i] = (a[i]/16380)/1000000000; 
             
        if (s[i] == "t")
            a[i] = a[i]/1000000;
        if (s[i] == "mt")
            a[i] = a[i]/1000;
        if (s[i] == "kt")
            a[i] = a[i]/1000000000;
        if (s[i] == "Mt")
            a[i] = a[i]/1000000000000;
        if (s[i] == "Gt")
            a[i] = a[i]/1000000000000000;
        cout << a[i] << ' ' << s[i] << "\n";    
    }
    return 0;
}
