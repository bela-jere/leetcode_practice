/*
LeetCode: Valid Anagram
Approach: Brute Force
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isAnagram(string s, string t) {

        //same size
        if (s.size() != t.size()) return false;

        //sort the two strings
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < s.size() - 1; j++) {
                if (s.at(j) > s.at(j+1)) {
                    char temp;
                    temp = s.at(j+1); 
                    s.at(j+1) = s.at(j);
                    s.at(j) = temp;
                }
            }
        }

        for (int i = 0; i < t.size(); i++) {
            for (int j = 0; j < t.size() - 1; j++) {
                if (t.at(j) > t.at(j+1)) {
                    char temp;
                    temp = t.at(j+1); 
                    t.at(j+1) = t.at(j);
                    t.at(j) = temp;
                }
            }
        }

        //compare the two strings  
        if (s == t) {
            return true;
        }
        else {
            return false;
        }
    }
};