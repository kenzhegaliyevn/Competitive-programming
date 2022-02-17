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

char a[101][101];
int n, m, cnt;

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> a[i][j];

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (a[i][j] == '*')
				continue;
			else {
				if (i > 1 && i < n && j > 1 && j < m){
					if (a[i - 1][j] == '.' && a[i + 1][j] == '.' && a[i][j + 1] == '.' && a[i][j - 1] == '.')
						cnt++;	
				} else if (i == 1 && j == 1){
					if (a[i][j + 1] == '.' && a[i + 1][j] == '.')
						cnt++;	
				} else if (i == n && j == m){
					if (a[i - 1][j] == '.' && a[i][j - 1] == '.')
						cnt++;	
				} else if (i == 1 && j == m) {
					if (a[i][j - 1] == '.' && a[i + 1][j] == '.')
						cnt++;	
				} else if (i == n && j == 1) {
					if (a[i - 1][j] == '.' && a[i][j + 1] == '.')
						cnt++;	
				} else if (i == 1 && j > 1 && j < m){
					if (a[i][j - 1] == '.' && a[i][j + 1] == '.' && a[i + 1][j] == '.')
						cnt++;	
				} else if (j == 1 && i > 1 && i < n){
					if (a[i + 1][j] == '.' && a[i - 1][j] == '.' && a[i][j + 1] == '.')
						cnt++;	
				} else if (i == n && j > 1 && j < m){
					if (a[i][j - 1] == '.' && a[i][j + 1] == '.' && a[i - 1][j] == '.')
						cnt++;	
				} else if (j == m && i > 1 && i < n){
					if (a[i - 1][j] == '.' && a[i + 1][j] == '.' && a[i][j - 1] == '.')
						cnt++;	
				}
			}
		}
	}
	printf ("%d", cnt);
	return 0;
}