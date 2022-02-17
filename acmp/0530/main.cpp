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
 
const int MAXN = (int)1e7 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int w, h;
char a[110][110];
char b[110][110];
char zz, zo, oz, oo;


int main(){
	scanf ("%d%d\n", &w, &h);
	
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++)
			scanf ("%c", &a[i][j]);
		scanf("\n");
	}
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++)
			scanf ("%c", &b[i][j]);
		scanf("\n");
	}
	scanf("%c%c%c%c\n", &zz, &zo, &oz, &oo);
	
	for (int i = 0; i < h; i++){
		for (int j = 0; j < w; j++){
			if (a[i][j] == '0' && b[i][j] == '0')
				printf ("%c", zz);
			else if (a[i][j] == '0' && b[i][j] == '1')
				printf ("%c", zo);
			else if (a[i][j] == '1' && b[i][j] == '0')
				printf ("%c", oz);
			else
				printf ("%c", oo);
		}
		printf ("\n");
	}
	return 0;
}

