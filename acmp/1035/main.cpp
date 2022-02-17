#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
const int maxn = 50010;

int n, m, x, y;
int a[maxn];
vector <pair <int, int> > vp;
bool used[maxn];
int ans;


bool compare(pair <int, int> a, pair <int, int> b) {
    if (a.first == b.first) 
        return a.second > b.second;
    return a.first < b.first;
}

int main(){
	scanf ("%d", &n);
	for (int i = 0; i < n; i++)
		scanf ("%d", &a[i]);	
	scanf ("%d", &m);
	for (int i = 0; i < m; i++){
		scanf ("%d%d", &x, &y);
		vp.push_back(make_pair(x, y));
	}
	sort(vp.begin(), vp.end(), compare);
/*	for (int i = 0; i < m; i++)
		printf ("%d %d\n", vp[i].first, vp[i].second);
	printf ("\n");*/
	
	int last = 0;
	for (int i = 1; i < m; i++){
		while (true){
			if (last < 0) break;
			if (vp[last].first == vp[i].first)
				last--;	
			else {
				if (vp[last].second >= vp[i].second)
					last--;
				else
					break;
			}
		}
		last++;
		vp[last] = vp[i];
	}
/*	printf ("%d\n", last);
	for (int i = 0; i < m; i++)
		printf ("%d %d\n", vp[i].first, vp[i].second);*/
	while ((int)vp.size() > last + 1) vp.pop_back();
	for (int i = 0; i < n; i++)
		ans += upper_bound(vp.begin(), vp.end(), make_pair(a[i], 0))->second; 
	printf ("%d\n", ans);
	return 0;
}
