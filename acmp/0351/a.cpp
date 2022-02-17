#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
#include <set>
 
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define ll long long
 
using namespace std;
 
const int INF = 1e9+7;
int n, k, d[100007], w[500], ans;
string s;
 
int main () {
	freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);  
     
    scanf("%d%d", &n, &k);
    cin >> s;
    memset(w, -1, sizeof(w));
    for (int i = 0; i < sizeof(w); i++) 
    d[0] = 0;
    w[s[0]] = 0;
	cout << "d[" << 0 << "] = " << d[0] << endl;
    for(int i = 1; i < n; i ++) {
        if(w[s[i]] >= max(0, i - k))
            d[i] = d[w[s[i]]];
        else
            d[i] = *min_element(d + max(0, i - k), d + i) + 1;
        w[s[i]] = i;
        cout << "d[" << i << "] = " << d[i] << endl;
    } 
    cout << d[n - 1];
    return 0;
}