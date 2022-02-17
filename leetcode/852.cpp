// Время O(log(A.size))
// Память O(A.size)

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int l = 0;
        int r = A.size() - 1;
        int mid;
        int i = 0;
        while (l < r) {
            mid = (l + r)/2;
            if (A[mid] < A[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }
};
