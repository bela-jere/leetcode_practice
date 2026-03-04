class Solution {
public: 
    vector<int> bubbleSort(vector<int>& nums){
        bool flag;
        for (int i = 0; i < nums.size(); i++){
            flag = false;
            for (int j = 0; j < nums.size() - 1 - i; j++){
                if(nums[j] > nums[j+1]){
                    int temp = nums[j+1];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    flag = true;
                }
            }
            if (!flag) {
                break;
            }
        }
        return nums;
    }
};

class Solution {
public: 
    bool flag;
    for (int i = 0; i < nums.size(); i++) {
        flag = false;
        for (int j = 0; j < nums.size() - 1 - i; j++) {
            if(nums[j] > nums[j+1]) {
                swap
            }
        }
    }
}
