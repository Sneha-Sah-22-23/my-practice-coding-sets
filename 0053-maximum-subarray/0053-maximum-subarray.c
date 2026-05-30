int maxSubArray(int* nums, int numsSize) {
    int cur_sum = nums[0];
    int max_sum = nums[0];
    for(int i = 1; i < numsSize; i++){
        if ((cur_sum + nums[i]) > nums[i]){
            cur_sum += nums[i];
        }
        else{
            cur_sum = nums[i];
        }

        //Comparing cur_sum with max_sum
        max_sum = cur_sum > max_sum? cur_sum : max_sum;
    }
    return max_sum;
}