/*
LeetCode: Intersection of two arrays
Approach: Brute Force
Time Complexity: O(n(m)min(n,m))
Space Complexity: O(min(n,m))
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> solution;
        
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1.at(i) == nums2.at(j)) {
                    if (solution.size() == 0) {
                        solution.push_back(nums2.at(j));
                    }
                    else{
                        bool exists = false;
                        for (int k = 0; k < solution.size(); k++) {
                            if (solution.at(k) == nums2.at(j)) {
                                exists = true; 
                                break;
                            }
                        }
                        if (!exists) {
                            solution.push_back(nums2.at(j));
                        }
                    }
                }
            }
        }
        return solution;    
    }
};