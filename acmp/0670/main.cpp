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


int n, t;
bool a[10];

bool check(int q){
	for (int j = 0; j < 10; j++)
		a[j] = 0;
		
	while (q){
		if (!a[q % 10])
			a[q % 10] = 1;
		else
			return 0;
		q /= 10;
	}	
	return 1;
}

int main(){
	scanf ("%d", &n);
	for (int i = 1; ; i++){
		if (check(i))
			t++;
		if (t == n){
			printf ("%d\n", i);
			return 0;
		}		
	}
	return 0;	
}
