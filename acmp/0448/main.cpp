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

void print(int t){
    if (t == 0)
        return;
    print(t/10);
    char c = char(t % 10 + '0');
    putchar(c);
}
  
int main(){
    scanf ("%d", &n);
    if (isprime(n)){
        for (int i = (n + 1)/2; i < n; i++){
            if (i >= 0 && i < 10)
                putchar(char(i + '0'));
            else
                print(i);
            putchar(' ');
            if (n - i >= 0 && n - i < 10)
                putchar(char(n - i + '0'));
            else
                print(n - i);
            putchar('\n');
        }
    } else {
        while (n > 0){
            int tmp = find_next_prime(n);
            for (int i = tmp - n; i <= tmp/2; i++){
              	if (i >= 0 && i < 10)
	                putchar(char(i + '0'));
                else
                		print(i);
                putchar(' ');
                if (tmp - i >= 0 && tmp - i < 10)
					putchar(char(tmp - i + '0'));
				else
                		print(tmp - i);
                putchar('\n');
            }
            n = tmp - n - 1;
        }
    }
    return 0;
}
