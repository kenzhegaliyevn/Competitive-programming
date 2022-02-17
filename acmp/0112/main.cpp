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
   
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
const int MAXN = (int)1e6 + 7;

int n, k;
vi fen;
int cnt;
int t;

void add(int index){
	for (int i = index; i < n; i = i | (i + 1))
		fen[i]++;
}

int cntDown(int idx){
	int s = 0;
	for (int i = idx; i >= 0; i = (i & (i + 1)) - 1)
		s += fen[i];
	return s;
}

int getCount(int index){
	return cntDown(n - 1) - cntDown(index - 1);
}

int main(){
	scanf("%d%d", &n, &k);
	for (int i = 0; i < k; i++){
		fen.assign(n, 0);
		for (int j = 0; j < n; j++){
			scanf ("%d", &t);
			t--;
			cnt += getCount(t + 1);
			add(t);	
			for (int q = 0; q < n; q++)
				printf("%d ", fen[q]);
			printf ("\n"); 
		}
	}
	printf ("%d\n", cnt);
    return 0;
}
