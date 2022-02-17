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
  
int a, b, c;
int sa[10], sb[10], sc[10];
vi r1;
int sza, szb, szc;
ll sum1, sum2, sum3;
set <ll> s;

void add1(){
	vi tmp;
	int maxi = max(sza, szb);
	if (sza < maxi)
		for (int i = sza; i < maxi; i++)
			sa[i] = 0;
	if (szb < maxi)
		for (int i = szb; i < maxi; i++)
			sb[i] = 0;
	for (int i = 0; i < maxi; i++)
		r1.pb(sa[i] + sb[i]);
	for (int i = 0; i < sz(r1); i++){
		if (r1[i] < 10)
			tmp.pb(r1[i]);
		else {
			tmp.pb(r1[i] % 10);
			tmp.pb(r1[i] / 10);
		}
	}
	r1.clear();
	for (int i = 0; i < sz(tmp); i++)	
		r1.pb(tmp[i]);
	maxi = max(sz(r1), szc);
	if (sz(r1) < maxi)
		for (int i = sz(r1); i < maxi; i++)
			r1.pb(0);
	if (szc < maxi)
		for (int i = szc; i < maxi; i++)
			sc[i] = 0;
	for (int i = 0; i < maxi; i++)
		r1[i] = r1[i] + sc[i];
	reverse(r1.begin(), r1.end());
	for (int i = 0; i < sz(r1); i++){
		sum1 *= 10;
		if (r1[i] < 10)
			sum1 += r1[i];
		else {
			sum1 += (r1[i]/10);
			sum1 *= 10;
			sum1 += (r1[i]%10);
		}	
	}	
}
void add2(){
	vi tmp;
	r1.clear();
	int maxi = max(sza, szc);
	if (sza < maxi)
		for (int i = sza; i < maxi; i++)
			sa[i] = 0;
	if (szc < maxi)
		for (int i = szc; i < maxi; i++)
			sc[i] = 0;
	for (int i = 0; i < maxi; i++)
		r1.pb(sa[i] + sc[i]);
	for (int i = 0; i < sz(r1); i++){
		if (r1[i] < 10)
			tmp.pb(r1[i]);
		else {
			tmp.pb(r1[i] % 10);
			tmp.pb(r1[i] / 10);
		}
	}
	r1.clear();
	for (int i = 0; i < sz(tmp); i++)	
		r1.pb(tmp[i]);
	maxi = max(sz(r1), szb);
	if (sz(r1) < maxi)
		for (int i = sz(r1); i < maxi; i++)
			r1.pb(0);
	if (szb < maxi)
		for (int i = szb; i < maxi; i++)
			sb[i] = 0;
	for (int i = 0; i < maxi; i++)
		r1[i] = r1[i] + sb[i];
	reverse(r1.begin(), r1.end());
	for (int i = 0; i < sz(r1); i++){
		sum2 *= 10;
		if (r1[i] < 10)
			sum2 += r1[i];
		else {
			sum2 += (r1[i]/10);
			sum2 *= 10;
			sum2 += (r1[i]%10);
		}	
	}	
}
void add3(){
	vi tmp;
	r1.clear();
	int maxi = max(szb, szc);
	if (szb < maxi)
		for (int i = szb; i < maxi; i++)
			sb[i] = 0;
	if (szc < maxi)
		for (int i = szc; i < maxi; i++)
			sc[i] = 0;
	for (int i = 0; i < maxi; i++)
		r1.pb(sb[i] + sc[i]);
	for (int i = 0; i < sz(r1); i++){
		if (r1[i] < 10)
			tmp.pb(r1[i]);
		else {
			tmp.pb(r1[i] % 10);
			tmp.pb(r1[i] / 10);
		}
	}
	r1.clear();
	for (int i = 0; i < sz(tmp); i++)	
		r1.pb(tmp[i]);
	maxi = max(sz(r1), sza);
	if (sz(r1) < maxi)
		for (int i = sz(r1); i < maxi; i++)
			r1.pb(0);
	if (sza < maxi)
		for (int i = sza; i < maxi; i++)
			sa[i] = 0;
	for (int i = 0; i < maxi; i++)
		r1[i] = r1[i] + sa[i];
	reverse(r1.begin(), r1.end());
	for (int i = 0; i < sz(r1); i++){
		sum3 *= 10;
		if (r1[i] < 10)
			sum3 += r1[i];
		else {
			sum3 += (r1[i]/10);
			sum3 *= 10;
			sum3 += (r1[i]%10);
		}	
	}	
}
int main(){
	scanf ("%d%d%d", &a, &b, &c);
	int i = 0;
	while (a){
		sa[i++] = a % 10;
		a /= 10;
	}		
	sza = i;
	i = 0;
	while (b){
		sb[i++] = b % 10;
		b /= 10;
	}		
	szb = i;
	i = 0;
	while (c){
		sc[i++] = c % 10;
		c /= 10;
	}		
	szc = i;
	add1();
	add2();
	add3();
	s.insert(sum1);
	s.insert(sum2);
	s.insert(sum3);
	if (s.size() == 1)
		printf ("NO\n%I64d\n", sum1);		
	else {
		printf ("YES\n");		
		for (set<ll>::iterator it = s.begin(); it != s.end(); ++it)
			printf ("%I64d\n", *it);	
	}
	return 0;
}
