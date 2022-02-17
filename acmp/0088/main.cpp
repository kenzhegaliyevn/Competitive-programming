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
 
const int MAXN = (int)3e4 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;


int n, N;
int a[101][101],
	tmp[1100];

	
int main(){
	scanf ("%d", &n);
	N = sqr(n);
	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= N; j++)
			scanf ("%d", &a[i][j]);
		scanf ("\n");	
	}
			
	//row
	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= N; j++)
			if (a[i][j] > 0 && a[i][j] <= N)
				tmp[a[i][j]] = 1;
			
		for (int j = 1; j <= N; j++)
			if (!tmp[j]) {
				printf ("Incorrect\n");
				return 0;
			}
		
		for (int j = 1; j <= N; j++)
			tmp[j] = 0;		
	}

	// column
	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= N; j++)
			if (a[i][j] > 0 && a[i][j] <= N)
				tmp[a[j][i]] = 1;
			
		for (int j = 1; j <= N; j++)
			if (!tmp[j]) {
				printf ("Incorrect\n");
				return 0;
			}
		
		for (int j = 1; j <= N; j++)
			tmp[j] = 0;		
	}

	//squar
	for (int i = 1; i <= N; i += n){
		for (int j = 1; j <= N; j += n){
			int stepj = j + n, stepi = i + n;
			for (int t = i; t < stepi; t++){
				for (int q = j; q < stepj; q++)
					if (a[t][q] > 0 && a[t][q] <= N)
						tmp[a[t][q]] = 1;
			}
			for (int k = 1; k <= N; k++)
				if (!tmp[k]) {
					printf ("Incorrect\n");
					return 0;
				}
			for (int k = 0; k < 101; k++)
				tmp[k] = 0;	
		}
	}
	
	printf ("Correct\n");
	return 0;
}

