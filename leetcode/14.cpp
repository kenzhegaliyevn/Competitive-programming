class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int mini = 0;
        if (strs.size() == 0)
            return "";
        
        for (int i = 1; i < strs.size(); i++) {
            if (strs[i].size() < strs[mini].size()) {
                mini = i;
            }
        }

        for (int i = 0; i < strs[mini].size(); i++) {
            for (int j = 0; j < strs.size() - 1; j++) {
                if (strs[j][i] != strs[j + 1][i])
                    return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};
