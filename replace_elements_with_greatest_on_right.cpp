/*
LeetCode: Replace elements with greatest element on right side
Approach: Brute Force
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            int max = arr.at(i+1);
            for (int j = i+1; j < arr.size(); j++) {
                if (arr.at(j) > max) {
                    max = arr.at(j);
                }  
            }
            arr.at(i) = max;
        }
        arr.at(arr.size() - 1) = -1;
        return arr;
    }
};