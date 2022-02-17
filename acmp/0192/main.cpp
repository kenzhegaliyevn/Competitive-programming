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
  

int n;
int a[MAXN];

void getNext(){
	int j = n - 2;
	while (j != -1 && a[j] > a[j + 1]) j--;
	if (j == -1)
		return;
	int k = n - 1;
	while (a[j] > a[k]) k--;
	swap(a[j], a[k]);
	int l = j + 1, r = n - 1;
	while (l < r)
		swap(a[l++], a[r--]);
}


int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);
	getNext();
	for (int i = 0; i < n; i++)
		printf ("%d ", a[i]);
	printf ("\n");
    return 0;
}
