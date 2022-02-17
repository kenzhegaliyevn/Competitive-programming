/* 
	To solve this problem I used boolean array
	1) Traverse the first string (J) one by one
	2) Mark element in array
	3) Traverse the second string (S) one by one
	4) Check exist element in array

	the complexity is O(max(S.size, J.size))
*/


class Solution {
public:
    int numJewelsInStones(string J, string S) {
        bool exist[130] = { 0 };
        int sum = 0;

        for (auto c : J)
            exist[c] = 1;

        for (auto c : S) 
            if (exist[c]) sum++;

        return sum;
    }
};
