#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> result;
		for (size_t i = 1; i < nums.size()-1; i++)
		{
			if (nums[i] != nums[i - 1])
			{
				int L = 0, R = nums.size() - 1;
				while (L < i && R >i)
				{
					if (nums[i] + nums[L] + nums[R] > 0)
					{
						R--;
					}
					else
					{
						if (nums[i] + nums[L] + nums[R] < 0)
						{
							L++;
						}
						else
						{
							vector<int> temp;
							temp.push_back(nums[i]);
							temp.push_back(nums[L]);
							temp.push_back(nums[R]);
							result.push_back(temp);
							R--;
							L++;
						}
					}
				}
				
			}
			
		}
		return result;
	}
};


int main() {
	Solution solution;
	vector<int> v1 = { -1, 0, 1, 2, -1, -4 };
	solution.threeSum(v1);
}