class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        int cnt[10010];
        fill(cnt, cnt + 10001, 0);
        
        for (int i = 0; i < A.size(); i++) 
            cnt[A[i]]++;
        int maxi = 0;
        int ans = 0;
        for (int i = 0; i < 10001; i++)
            if (cnt[i] > maxi) {
                maxi = cnt[i];
                ans = i;
            }
        return ans;
    }
};
