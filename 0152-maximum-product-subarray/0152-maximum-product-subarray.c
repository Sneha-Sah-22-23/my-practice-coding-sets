int maxProduct(int* nums, int numsSize) {
    int max_prod = nums[0]; int cur_min = nums[0]; 
    int cur_max = nums[0]; int temp = 0;
    for (int i = 1; i < numsSize; i++){
        // Choosing Max
        temp = cur_max;
        cur_max *= nums[i];
        if (cur_min * nums[i] > cur_max) cur_max = cur_min * nums[i];
        if (nums[i] > cur_max) cur_max = nums[i];
        // Choosing Min
        cur_min *= nums[i];
        if (temp * nums[i] < cur_min) cur_min = temp * nums[i];
        if (nums[i] < cur_min) cur_min = nums[i];

        if (max_prod < cur_max) max_prod = cur_max;
    }

    return max_prod;
}