class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack <int> st;
        int area = 0;
        int ans = 0;
        int i = 0;
        
        while (i < heights.size()) {
            if (st.empty() || heights[st.top()] <= heights[i])
                st.push(i++);
            else {
                int top = st.top();
                st.pop();
                if (st.empty())
                    area = heights[top] * i;
                else 
                    area = heights[top]*(i - st.top() - 1);
                ans = max(ans, area);
            }
        }
        while (!st.empty()) {
            int top = st.top();
            st.pop();
            if (st.empty())
                area = heights[top] * i;
            else 
                area = heights[top]*(i - st.top() - 1);
            ans = max(ans, area);            
        }
        return ans;
    }
};
