/*
LeetCode: Valid Palindrome
Approach: Brute Force
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    bool isPalindrome(string s) {

        string cleaned;
        // remove non-alphanumeric and lowercase
        for (int i = 0; i < s.size(); i++) {
            if(isalnum(s.at(i))) {
                cleaned.push_back(tolower(s.at(i)));
            }
        }

        // reverse
        string reverse = cleaned;
        for (int i = 0; i < cleaned.size(); i++) {
            reverse.at(i) = cleaned.at(cleaned.size() - 1 - i);
        }

        // compare
        return cleaned == reverse;
    }
};