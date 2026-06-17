class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        int left = 0;
        int right = k - 1;
        unordered_map<int, int> seen;

        for (int i = 0; i < k; i++) {
            sum += nums[i];
            seen[nums[i]]++;
        }
        
        long long max_sum = 0;
        if (seen.size() == k) max_sum = sum;
        

        while (right + 1 < nums.size()) {
            sum -= nums[left];
            seen[nums[left]]--;
            if (seen[nums[left]] == 0) seen.erase(nums[left]);
            left++;
            right++;
            seen[nums[right]]++;
            sum += nums[right];
            if (seen.size() != k)
                continue;

            max_sum = sum > max_sum ? sum : max_sum;
        }

        return max_sum;
    }
};