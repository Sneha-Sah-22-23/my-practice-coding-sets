class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map; vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];

            if (map.count(complement)){
                ans.push_back(map[complement]);
                ans.push_back(i);
            }

            map[nums[i]] = i;
        }

        return ans;
    }
};