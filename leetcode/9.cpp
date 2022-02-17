class Solution {
public:
    bool isPalindrome(int x) {
        string s = "", rev = "";
        if (x < 0)
            return false;
        int origin = x;
        while (x) {
            s += (x % 10 +'0');
            x /= 10;
        }
        
        for (int i = s.size() - 1; i >= 0; i--)
            rev += s[i];
        return s == rev;
    }
};
