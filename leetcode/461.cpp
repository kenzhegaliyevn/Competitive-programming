/*
	1) XOR
	2) Count the number of bits set
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        x ^=y;
        y = 0;
        while (x != 0) {
            x &= (x - 1);
            y++;
        }
        return y;
    }
};

