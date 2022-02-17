/*
	To solve this problem
	1) write Morse code alphabet in vector
	2) traverse the words array and each traverse each item
	3) convert letter to code
	4) create morse code string & add to map
	5) print the map size

	the complexity is O(words.size() * words[i].size())
*/


class Solution {
public:
    vector<string> alphabet = {".-", "-...", "-.-.", "-..", ".", 
                           "..-.", "--.", "....", "..", ".---", 
                           "-.-", ".-..", "--", "-.", "---", ".--.", 
                           "--.-", ".-.", "...", "-", "..-", "...-", 
                           ".--", "-..-", "-.--", "--.."};

    map <string, int> ans;
    
    int uniqueMorseRepresentations(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            string tmp = "";
            for (int j = 0; j < words[i].size(); j++) {
                tmp += alphabet[words[i][j] - 'a'];
            }
            ans[tmp] = ans.find(tmp) == ans.end() ? 1 : ++ans[tmp];
        }
        return ans.size();
    }
};

