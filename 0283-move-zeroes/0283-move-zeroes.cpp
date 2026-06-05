class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; int pos = 0;
        while (i < nums.size()){
            if (nums[i] != 0){
                nums[pos] = nums[i];
                pos++;
            }
            i++;
        }

        while (pos < nums.size()){
            nums[pos] = 0; pos++;
        }
    }
};
