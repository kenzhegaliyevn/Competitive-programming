#include <iostream>
#include <vector>
#include <cstdio>
#include <string>


using namespace std;

int main() {
	char buffer[1000000 + 1];
	scanf("%1000000s", buffer);
	string s(buffer);

	vector<char> v;
	
	// add space around characters 
	// start
	v.push_back(' ');
	for (char c : s) {
		v.push_back(c);
		v.push_back(' ');			
	}
	// end

	s = string(v.begin(), v.end());
	int n = (int)s.size();
//	printf("s = %s n = %d\n", s.c_str(), n);
	int left = 0;			// left bound of palindrome
	int right = 0;			// right bound of palindrome
	vector<int> d (n, 1);	// vector of palindrome's length
	
	for (int i = 1; i < n; i++) {
		int L;
		int R;
		if (i > right) {
			L = i;
			R = i;
		} else {
			int mi = right + left - i;	// mirror of position i;
			L = i - d[mi] + 1;
			R = i + d[mi] - 1;
			
			// if mirror position is out of R bound, we trying to cut 
			// start
			if (R > right) {
				int d = R - right;		// delta between R and right;
				R -= d;
				L += d;
			}		
			// end	
		}
		
		
		// trying to find palindrome
		// start
		while (L - 1 >= 0 && R + 1 < n && s[L - 1] == s[R + 1]) {
			L--;
			R++;
		}
		//end
		
		d[i] = R - i + 1;	// palindrome's radius from i position
		
		
		// update bounds of palindrome
		// start
		if (R > right) {
			left = L;
			right = R;
		}
		// end
	}
	
	long long ans = 0;
	for (int value : d)
		ans += value/2;
	
	printf ("%lld\n", ans);
	return 0;
}
