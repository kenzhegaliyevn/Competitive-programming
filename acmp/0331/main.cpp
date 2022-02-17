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

char h, hh, m, mm;
int s, t;
int H, M;

int main(){
	scanf ("%c%c:%c%c\n", &h, &hh, &m, &mm);	
	scanf ("%d%d", &s, &t);
	H = (h - '0') * 10 + (hh - '0');
	M = (m - '0') * 10 + (mm - '0');
	if (s < 24){
		if (s < 12){
			H += s;
			H = (H >= 24) ? H - 24 : H;
			M += t;
			if (M >= 60){
				H++;
				M -= 60;
				H = (H >= 24) ? H - 24 : H;				
			}
		} else {
			H += 12;
			s %= 12;
			if (H >= 24) H -= 24;
			H += s;
			H = (H >= 24) ? H - 24 : H;
			M += t;
			if (M >= 60){
				H++;
				M -= 60;
				H = (H >= 24) ? H - 24 : H;				
			}
		}
	} else {
		s %= 24;
		H += s;
		H = (H >= 24) ? H - 24 : H;
		M += t;
		if (M >= 60){
			H++;
			M -= 60;
			H = (H >= 24) ? H - 24 : H;				
		}		
	}
	if (H < 10)
		printf ("0%d:", H); 
	else
		printf ("%d:", H);
	
	if (M < 10)
		printf ("0%d", M);
	else
		printf ("%d\n", M);
	return 0;
}
