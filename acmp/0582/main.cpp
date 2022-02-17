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
 
int a[6], b[6];
 
void right(){
	int b2 = b[2], b3 = b[3], b4 = b[4], b5 = b[5];
	b[2] = b4, b[3] = b5, b[4] = b3, b[5] = b2;
}

void down(){
	int b0 = b[0], b1 = b[1], b2 = b[2], b3 = b[3];
	b[0] = b2, b[1] = b3, b[2] = b1, b[3] = b0;
}

void left(){
	int b0 = b[0], b1 = b[1], b4 = b[4], b5 = b[5];
	b[0] = b5, b[1] = b4, b[4] = b0, b[5] = b1;
}

int check(){
	int cnt = 0;
    for (int i = 0; i < 6; i++)
        if (a[i] == b[i])
        	cnt++;
    return cnt;
}
 
int main(){
    freopen ("input.txt", "r", stdin);  
    freopen ("output.txt", "w", stdout);    
    for (int i = 0; i < 6; i++)
        scanf ("%d", &a[i]);
    scanf ("\n");        
    for (int i = 0; i < 6; i++)
        scanf ("%d", &b[i]); 
    for (int i = 0; i <= 3; i++){
        right();
        if (check() == 6){
            printf ("YES");
            return 0;
        }
        for (int j = 0; j <= 3; j++){
            down();
            if (check() == 6){
				printf ("YES");
				return 0;
			}
			for (int k = 0; k < 4; k++){
				left();
	            if (check() == 6){
					printf ("YES");
					return 0;
				}
			}
        }
    }
    printf ("NO");
    return 0;
}
