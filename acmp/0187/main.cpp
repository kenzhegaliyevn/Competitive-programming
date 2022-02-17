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

const int MAXN = (int)2e5 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

ll a[50][50];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n;
	scanf ("%d", &n);
	int j = n + 1, i = 2;
	for (int k = 0; k <= n; k++)
		a[1][k] = 1;
	for (int k = 0; k <= n; k++)
		a[k][1] = 1;

	while (true){
		if (j > n + n - 1)
			break;
		for (int k = 1; k <= j; k++)
			if (a[i][k] == 0)
				a[i][k] = a[i][k - 1] + a[i - 1][k] + a[i - 1][k - 1];
		j++;
		i++;
	}
	j -= 2;
	while (true){
		if (i > n + n - 1)
			break;
		for (int k = 1; k <= j; k++)
			a[i][k] = a[i][k - 1] + a[i - 1][k] + a[i - 1][k + 1];
		j--;
		i++;
	}

/*	for (int i = 1; i <= n + n - 1; i++){
		for (int j = 1; j <= n + n - 1; j++){
//			if (a[i][j] != 0)
				printf ("%d ", a[i][j]);
		}
		printf ("\n");
	}*/
	printf ("%I64d ", a[i - 1][j + 1]);
	return 0;
}