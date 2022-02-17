#include <iostream>
#include <vector>

#define pb push_back

using namespace std;

typedef vector<int> vi;

int n, k, m;
int friends[25][25];
int x, y;
int ansArray[25];
int curArray[25];
int ans;

void rec(int pos, int rem, int curSum){
	if (pos == n){
		if (ans < curSum){
			ans = curSum;
			for (int i = 0; i < n; i++)
				ansArray[i] = curArray[i];
		}
		return;
	}
	if (pos + rem < n){
		curArray[pos] = 0;
		int tmpF = curSum;
		for (int i = 0; i < pos; i++){
			if (friends[pos][i] & (curArray[i] - 1))
				tmpF++;
		}
		rec(pos + 1, rem, tmpF);
	}
	if (rem > 0){
		curArray[pos] = 1;
		int tmpS = curSum;
		for (int i = 0; i < pos; i++){
			if (friends[pos][i] & curArray[i])
				tmpS++;
		}
		rec(pos + 1, rem - 1, tmpS);
	}
}


int main(){
	scanf ("%d%d%d", &n, &k, &m);
	for (int i = 0; i < m; i++){
		scanf ("%d%d", &x, &y);
		x--;
		y--;
		friends[x][y] = 1;
		friends[y][x] = 1;
	}	
	rec(0, k, 0); 			
	for (int i = 0; i < n; i++){
		if (ansArray[i])
			printf ("%d ", i + 1);
	}
	return 0;
}
