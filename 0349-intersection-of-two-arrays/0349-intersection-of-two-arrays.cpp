class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set;
        unordered_set<int> result_set;

        for (int num: nums1){
            set.insert(num);
        }

        for (int num: nums2){
            if (set.count(num) == 1){
                result_set.insert(num);
            }
        }

        vector<int> result(result_set.begin(), result_set.end());
        return result;
    }
};