class Solution {
public:
    int reverse(int x) {
        int digit = 10;
        long long ans = 0;
        
        while (x) {
            if (INT_MIN/10 > ans || ans > INT_MAX/10)
                return 0;                
            ans = (x % 10) + ans * digit;
            x /= 10;
        }
                
        return (int)ans;
    }
};
