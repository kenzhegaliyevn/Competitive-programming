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
const int maxn = (int)1e6 + 7;
   
int n;
   
bool isprime(int x){
    if (x == 1 || x == 2)
        return 1;
    for (int i = 2; i <= (int)sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}
  
int find_next_prime(int t){
    for (int i = t + 1; i < 500001; i++)
        if (isprime(i))
            return i;
} 

int main(){
    scanf ("%d", &n);
    if (isprime(n)){
        for (int i = (n + 1)/2; i < n; i++){
        		int tmp = i;
        		string s = "";
        		while (tmp){
        			s += char(tmp % 10 + '0');
        			tmp /= 10;
        		}
        		puts(s);
            putchar(' ');
            tmp = n - i;
            s = "";
        		while (tmp){
        			s += char(tmp % 10 + '0');
        			tmp /= 10;
        		}
        		puts(s);
            puts("\n");
        }
    } else {
        while (n > 0){
            int tmp = find_next_prime(n);
            for (int i = tmp - n; i <= tmp/2; i++){
		    		int tmp1 = i;
		    		string s = "";
		    		while (tmp1){
		    			s += char(tmp1 % 10 + '0');
		    			tmp /= 10;
		    		}
	        		puts(s);
		        putchar(' ');				
				tmp1 = tmp;
		        s = "";
		    		while (tmp1){
		    			s += char(tmp1 % 10 + '0');
		    			tmp1 /= 10;
		    		}
	        		puts(s);	
		        puts("\n");
            }
            n = tmp - n - 1;
        }
    }
    
    return 0;
}
