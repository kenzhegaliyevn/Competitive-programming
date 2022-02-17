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
 
const int MAXN = (int)1e9 + 1;
const int mod = (int)1e9 + 7;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long, long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
 
int n;
int day[5050];
int month[5050];
int hour[5050];
int minute[5050];
int hh, mm;

void bubble_sort(){
	for (int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (month[i] > month[j]){
				swap(month[i], month[j]);
				swap(day[i], day[j]);
				swap(hour[i], hour[j]);
				swap(minute[i], minute[j]);			
			} else if (month[i] == month[j]){
				if (day[i] > day[j]){
					swap(month[i], month[j]);
					swap(day[i], day[j]);
					swap(hour[i], hour[j]);
					swap(minute[i], minute[j]);							
				} else if (day[i] == day[j]){
					if (hour[i] > hour[j]){
						swap(month[i], month[j]);
						swap(day[i], day[j]);
						swap(hour[i], hour[j]);
						swap(minute[i], minute[j]);								
					} else if (hour[i] == hour[j]){
						if(minute[i] > minute[j]){
							swap(month[i], month[j]);
							swap(day[i], day[j]);
							swap(hour[i], hour[j]);
							swap(minute[i], minute[j]);										
						}
					}
				}
			
			}		
		}
	}
	
}
void solve(){
	for (int i = 0; i < n; i += 2){
		int tmph = 0;
		int tmpm = 0;
		if (month[i] != month[i + 1]){
			if (month[i] == 1 || month[i] == 3 || month[i] == 5 || month[i] == 7 || month[i] == 8 || month[i] == 10 || month[i] == 12){
				int x = 31 - day[i];
				tmph = tmph + x*8;
			} else if (month[i] == 4 || month[i] == 6 || month[i] == 9 || month[i] == 11){
				int x = 30 - day[i];
				tmph = tmph + x*8;
			} else {
				int x = 28 - day[i];
				tmph = tmph + x*8;
			}
			if (minute[i] > 0){
				tmpm = tmpm + (60 - minute[i]);
				tmph = tmph + (17 - hour[i]);
			} else {
				tmpm = tmpm + (0 - minute[i]);
				tmph = tmph + (18 - hour[i]);
			}
			month[i] += 1;
			while (month[i] != month[i + 1]){
				if (month[i] == 1 || month[i] == 3 || month[i] == 5 || month[i] == 7 || month[i] == 8 || month[i] == 10 || month[i] == 12){
					tmph = tmph + 31*8;
				} else if (month[i] == 4 || month[i] == 6 || month[i] == 9 || month[i] == 11){
					tmph = tmph + 30*8;					
				} else {
					tmph = tmph + 28*8;
				}
				month[i]++;			
			}
			int x = day[i + 1] - 1;
			tmph = tmph + x*8;
			tmph = tmph + hour[i + 1] - 10;
			tmpm = tmpm + minute[i + 1] + 1;
		} else {
			if (day[i] != day[i + 1]){
				if (minute[i] > 0){
					tmpm = tmpm + (60 - minute[i]);
					tmph = tmph + (17 - hour[i]);
				} else {
					tmpm = tmpm + (0 - minute[i]);
					tmph = tmph + (18 - hour[i]);
				}
				day[i]++;
				int x = day[i + 1] - day[i];
				tmph = tmph + x*8;
					
				tmph += (hour[i + 1] - 10);
				tmpm += (minute[i + 1] + 1);
			} else {
				tmph = tmph + hour[i + 1] - hour[i];
				tmpm = tmpm + minute[i + 1] - minute[i] + 1;
			}		
		}
		hh = hh + tmph;
		mm = mm + tmpm;		
	}
}
int main () {
	scanf ("%d\n", &n);
	for (int i = 0; i < n; i++)
		scanf("%d.%d. %d:%d\n", &day[i], &month[i], &hour[i], &minute[i]);		
	bubble_sort();
	solve();
	hh += (mm/60);
	mm %= 60;
	if (mm < 10)
		printf ("%d:0%d\n", hh, mm);
	else
		printf ("%d:%d\n", hh, mm);
    return 0;
}
