class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(int i = 0; i < details.size(); i++) {
            string element = details.at(i);
            if ((element.at(11)-'0') >= 6) {
                if ((element.at(11)-'0') == 6) {
                    if ((element.at(12)-'0') == 0) {
                        continue;
                    }
                    else {count++;}
                }
                else {count++;}
            }
        }
        return count;
    }
};