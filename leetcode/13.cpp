class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int i = 0;
        while (true) {
            if (i == s.size()) return ans;
            if (s[i] == 'I') {
                if (s[i + 1] == 'V') {
                    ans = ans + 4;
                    i += 2;
                } else if (s[i + 1] == 'X') {
                    ans = ans + 9;
                    i += 2;
                } else if (s[i + 1] == 'I') {
                    int cnt = 0;
                    while (s[i] == 'I' && i < s.size()) {
                        cnt++;
                        i++;
                    }
                    ans = ans + cnt;
                } else {
                    ans = ans + 1;
                    i++;
                }
            } else if (s[i] == 'X') {
                if (s[i + 1] == 'L') {
                    ans = ans + 40;
                    i += 2;
                } else if (s[i + 1] == 'C') {
                    ans = ans + 90;
                    i += 2;
                } else if (s[i + 1] == 'X') {
                    int cnt = 0;
                    while (s[i] == 'X' && i < s.size()) {
                        cnt++;
                        i++;
                    }
                    ans = ans + cnt*10;
                } else {
                    ans = ans + 10;
                    i++;
                }
            } else if (s[i] == 'C') {
                if (s[i + 1] == 'D') {
                    ans = ans + 400;
                    i += 2;
                } else if (s[i + 1] == 'M') {
                    ans = ans + 900;
                    i += 2;
                } else if (s[i + 1] == 'C') {
                    int cnt = 0;
                    while (s[i] == 'C' && i < s.size()) {
                        cnt++;
                        i++;
                    }
                    ans = ans + cnt*100;
                } else {
                    ans = ans + 100;
                    i++;
                }                
            } else if (s[i] == 'V') {
                ans += 5;
                i++;
            } else if (s[i] == 'L') {
                ans += 50;
                i++;
            } else if (s[i] == 'D') {
                ans += 500;
                i++;
            } else {
                ans += 1000;
                i++;
            }
        }
    }
};
