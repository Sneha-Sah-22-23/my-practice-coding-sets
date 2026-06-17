class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum = 0;
        int left = 0;
        int right = k - 1;

        for(int i= 0; i < k; i++){
            sum += nums[i];
        }
        long long max_sum = sum;

        while(right + 1 < nums.size()){
            sum -= nums[left]; 
            left++; right++;
            sum += nums[right];

            max_sum = sum > max_sum? sum : max_sum;
        }

        return ((double)max_sum / k);
    }
};