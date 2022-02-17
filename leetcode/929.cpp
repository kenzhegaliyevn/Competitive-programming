class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        string s;
        int plusPos = -1;
        int dotPos = -1;
        set <string> st;
        
        for (int i = 0; i < emails.size(); i++) {
            s = "";
            plusPos = -1;
            dotPos = -1;            
            for (int j = 0; j < emails[i].size(); j++) {
                if (emails[i][j] == '+') {
                    if (plusPos == -1)
                        plusPos = j;
                } else if (emails[i][j] == '@') {
                    dotPos = j;
                    break;
                }
            }
            
            if (plusPos != -1) 
                for (int j = 0; j < plusPos; j++) {
                    if (emails[i][j] == '.') continue;
                    s += emails[i][j];
                }

            for (int j = dotPos; j < emails[i].size(); j++)
                s += emails[i][j];
            st.insert(s);
        }
        return st.size();
    }
};
