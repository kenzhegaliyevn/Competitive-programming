/*
	Complexity O(moves.size)
*/

class Solution {
public:
    bool judgeCircle(string moves) {
        int ansX = 0, ansY = 0;
        for (int i = 0; i < moves.size(); i++){
            if (moves[i] == 'U')
                ansY++;
            else if (moves[i] == 'R')
                ansX++;
            else if (moves[i] == 'D')
                ansY--;
            else
                ansX--;
        }
        if (ansX == 0 && ansY == 0)
            return 1;
        return 0;
    }
};
