#include <iostream>
#include <vector>
#include <map>

using namespace std;


vector <int> nums;
int target, n, number;

class Input {
	public: 
		void input() {
			scanf ("%d", &n);
			for (int i = 0; i < n; i++) {
				scanf("%d", &number);
				nums.push_back(number);
			}
			scanf ("%d", &target);
		}
};

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map <int, int> m;
		vector <int> result;
		
		for (int i = 0; i < nums.size(); i++) {
			if (m.find(nums[i]) == m.end())
				m[target - nums[i]] = i;
			else {
				result.push_back(m[nums[i]]);
				result.push_back(i);	
				return result; 
			}
		}
	}
};

int main() {
	Input enter;
	enter.input();

	Solution a;
	vector <int> v = a.twoSum(nums, target);

	for (int i = 0; i < v.size(); i++)
		printf ("%d ", v[i]);
	return 0;
}
