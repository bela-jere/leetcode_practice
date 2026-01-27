/*
LeetCode: Two Sum
Approach: Brute Force
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int current_value;
        for (int i = 0; i < nums.size(); i++) {
            current_value = nums.at(i);
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.at(i) + nums.at(j) == target) {
                    return {i, j};
                }
            }
        }
    }
};
