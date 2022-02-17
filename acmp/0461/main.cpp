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
const int MAXN = (int)1e9 + 1;
const int mod = (int)1e9 + 7;

int n;
int a[1010];

void quickSort(int l, int r){
	int i = l;
	int j = r;
	int mid = a[(i + j)/2];
	while (i <= j){
		while (a[i] < mid)
			i++;	
		while (mid < a[j])
			j--;
		if (i <= j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (j > l)
		quickSort(l, j);
	if (i < r)
		quickSort(i, r);
}

int main(){
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	quickSort(0, n - 1);
	int ans = 0;
	for (int i = 0; i < n/2 + 1; i++)
		ans += (a[i]/2 + 1);
	printf ("%d", ans);
	return 0;
}
