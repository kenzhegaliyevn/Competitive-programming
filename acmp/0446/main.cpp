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

char t[101][101];
int z[101][101];

int main(){
	freopen ("input.txt", "r", stdin);
	freopen ("output.txt", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> t[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> z[i][j];

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (t[i][j] == 'B'){
				if (z[i][j] != 1 && z[i][j] != 3 && z[i][j] != 5 && z[i][j] != 7) {
					cout << "NO";
					return 0;
				}
			} else if (t[i][j] == 'G'){
				if (z[i][j] != 2 && z[i][j] != 3 && z[i][j] != 6 && z[i][j] != 7){
					cout << "NO";
					return 0;
				}
			} else if (t[i][j] == 'R'){
				if (z[i][j] != 4 && z[i][j] != 5 && z[i][j] != 6 && z[i][j] != 7) {
					cout << "NO";
					return 0;
				}
			}
		}
	}
	cout << "YES";
	return 0;
}