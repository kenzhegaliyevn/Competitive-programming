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

int a, b;
vi sa;
vi sb;

int main(){
	cin >> a >> b;
	if (a == 0 && b == 0){
		cout << 0;
		return 0;
	}
	
	if (a == 0 && b < 0){
		b *= -1;
		while (b){
			sb.pb(b % 10);
			b /= 10;
		}	
		sort(sb.begin(), sb.end());
		reverse(sb.begin(), sb.end());
		int tmp = 0;
		for (int i = 0; i < sz(sb); i++){
			tmp *= 10;
			tmp += sb[i];
		}
		tmp *= -1;
		cout << a - tmp << '\n';
		return 0;
	}
	
	if (a == 0 && b > 0){
		while (b){
			sb.pb(b % 10);
			b /= 10;
		}	
		sort(sb.begin(), sb.end());
		int tmp = 0;
		for (int i = 0; i < sz(sb); i++){
			tmp *= 10;
			tmp += sb[i];
		}
		cout << a - tmp << '\n';
		return 0;
	}
	
	if (a < 0 && b == 0){
		a *= -1;
		while (a){
			sa.pb(a % 10);
			a /= 10;
		}	
		sort(sa.begin(), sa.end());
        if (sa[0] == 0 && sz(sa) > 0){
            int i = 1;
            while (sa[i] == 0 && i < sz(sa) - 1)
                i++;
            swap(sa[i], sa[0]);
        }          		
		int tmp = 0;
		for (int i = 0; i < sz(sa); i++){
			tmp *= 10;
			tmp += sa[i];
		}
		tmp *= -1;
		cout << tmp << '\n';
		return 0;	
	}	
	
	if (a > 0 && b == 0){
		while (a){
			sa.pb(a % 10);
			a /= 10;
		}	
		sort(sa.begin(), sa.end());
		reverse(sa.begin(), sa.end());
		int tmp = 0;
		for (int i = 0; i < sz(sa); i++){
			tmp *= 10;
			tmp += sa[i];
		}
		cout << tmp << '\n';
		return 0;	
	}	
    if (a < 0 && b < 0){
        b *= (-1);
        a *= (-1);
        while (a){
            sa.pb(a % 10);
            a /= 10;    
        }   
        while (b){
            sb.pb(b % 10);
            b /= 10;    
        }   
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());
		reverse(sb.begin(), sb.end());
        if (sa[0] == 0 && sz(sa) > 1){
            int i = 1;
            while (sa[i] == 0 && i < sz(sa) - 1)
                i++;
            swap(sa[i], sa[0]);
        }
		int tmpa = 0;
        int tmpb = 0;
        for (int i = 0; i < sz(sa); i++){
            tmpa *= 10;
            tmpa += sa[i];  
        }
        for (int i = 0; i < sz(sb); i++){
            tmpb *= 10;
            tmpb += sb[i];  
        }
        tmpa *= -1;
        tmpb *= -1;
        cout << tmpa - tmpb << '\n';    
        return 0;       
    } 
    
    if (a < 0 && b > 0){
        a *= (-1);
        while (a){
            sa.pb(a % 10);
            a /= 10;    
        }   
        while (b){
            sb.pb(b % 10);
            b /= 10;    
        }   
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());
        if (sa[0] == 0 && sz(sa) > 1){
            int i = 1;
            while (sa[i] == 0 && i < sz(sa))
                i++;
            swap(sa[i], sa[0]);
        }
        if (sb[0] == 0 && sz(sb) > 1){
            int i = 1;
            while (sb[i] == 0 && i < sz(sb))
                i++;
            swap(sb[i], sb[0]);
        }           
        int tmpa = 0;
        int tmpb = 0;
        for (int i = 0; i < sz(sa); i++){
            tmpa *= 10;
            tmpa += sa[i];  
        }
        for (int i = 0; i < sz(sb); i++){
            tmpb *= 10;
            tmpb += sb[i];  
        }
        tmpa *= -1;
        cout << tmpa - tmpb << '\n';    
        return 0;   
    } 
    
    if (a > 0 && b < 0){
    		b *= -1;
        while (a){
            sa.pb(a % 10);
            a /= 10;    
        }   
        while (b){
            sb.pb(b % 10);
            b /= 10;    
        }   
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());
        reverse(sa.begin(), sa.end());
        reverse(sb.begin(), sb.end());
        int tmpa = 0;
        int tmpb = 0;
        for (int i = 0; i < sz(sa); i++){
            tmpa *= 10;
            tmpa += sa[i];  
        }
        for (int i = 0; i < sz(sb); i++){
            tmpb *= 10;
            tmpb += sb[i];  
        }
        tmpb *= -1;
        cout << tmpa - tmpb << '\n';    
        return 0;
    }
    
    if (a > 0 && b > 0){
        while (a){
            sa.pb(a % 10);
            a /= 10;    
        }   
        while (b){
            sb.pb(b % 10);
            b /= 10;    
        }   
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end());
        reverse(sa.begin(), sa.end());
        if (sb[0] == 0 && sz(sb) > 1){
            int i = 1;
            while (sb[i] == 0 && i < sz(sb))
                i++;
            swap(sb[i], sb[0]);
        }           
        int tmpa = 0;
        int tmpb = 0;
        for (int i = 0; i < sz(sa); i++){
            tmpa *= 10;
            tmpa += sa[i];  
        }
        for (int i = 0; i < sz(sb); i++){
            tmpb *= 10;
            tmpb += sb[i];  
        }
        cout << tmpa - tmpb << '\n';    
        return 0;    
    }
	return 0;
}
