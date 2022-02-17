class Solution {
public:
//     int letters[30];
    
//      // O(max(s.size(), t.size())) времени и памяти 
//     char findTheDifference(string s, string t) {
//         for (int i = 0; i < s.size(); i++)
//             letters[s[i] - 'a']++;
//         for (int i = 0; i < t.size(); i++)
//             letters[t[i] - 'a']++;
//         for (int i = 0; i < 30; i++)
//             if (letters[i] % 2 == 1)
//                 return char(i + 'a');
//         return 'a';
//     }
    
    
    int cnt = 0;
    char findTheDifference(string s, string t) {
        for (int i = 0; i < s.size(); i++)
            cnt = cnt^(t[i] - 'a')^(s[i] - 'a');
        cnt = cnt^(t[t.size() - 1] - 'a');
        return char(cnt + 'a');
    }
};
