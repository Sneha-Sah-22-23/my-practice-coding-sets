class Solution {
public:
    int findMin(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int mid = nums.size() / 2;
        int left = 0; int right = nums.size() - 1;
        
        if(nums[mid] > nums[right]){
            left = mid;
            mid = (left + right) / 2;
        }
        else{
            right = mid;
            mid = (left + right) / 2;
        }

        while ((left + 1) != right){
            if (nums[mid] > nums[right]){
                    left = mid;
                    mid = (left + right) / 2;
                }else{
                    right = mid;
                    mid = (left + right) / 2;
                }
        }

        return (nums[left] < nums[right]? nums[left] : nums[right]);
    }  
    
};