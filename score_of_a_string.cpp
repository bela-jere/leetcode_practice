/*
LeetCode: Score of a string
Approach: Brute Force
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            int difference = s.at(i+1) - s.at(i);
            if (difference < 0) {
                difference *= -1;
            }
            sum = sum + difference; 
        }
        return sum; 
    }
};