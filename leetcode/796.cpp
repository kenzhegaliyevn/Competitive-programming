// время и память O(A.size() + B.size())

class Solution {
public:
    bool rotateString(string A, string B) {
        if (A.size() != B.size())
            return false;
        string b = B;
        B = B + "#" + A + A;
        vector<int> pi(B.size(), 0);
        for (int i = 1; i < B.size(); i++) {
            int j = pi[i - 1];
            while (j > 0 && B[i] != B[j])
                j = pi[j - 1];
            
            pi[i] = (B[i] == B[j]) ? j + 1 : j;                
        }
        
        for (int i = 0; i < pi.size(); i++)
            if (pi[i] == b.size())
                return true;
        return false;
    }
};

/* class Solution {
public:
    bool rotateString(string A, string B) {
        string rotate = A;
        while (true) {
            rotate = rotate + rotate[0];
            rotate.erase(0, 1);
            if (rotate == B)
                return true;
            if (rotate == A)
                return false;            
        }
        return true;
    }
}; */
