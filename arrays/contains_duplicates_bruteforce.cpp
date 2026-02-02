/*
LeetCode: Contains Duplicates
Approach: Brute Force
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

class Solution {
public: 
    bool hasDuplicates(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if(nums.at(i) == nums.at(j)) {
                    return true;
                }
            }
        }
        return false;
    }
}