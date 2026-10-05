class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r = 0; int l = numbers.size() - 1;
        while( r < l){
            if(numbers[r] + numbers[l] == target){
                return {r + 1, l + 1};
            }
            else if(numbers[r] + numbers[l] < target){
                r++;
            }
            else{ l--; }
        }
        return {0};
    }
};