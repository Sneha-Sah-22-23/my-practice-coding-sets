class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ascii[128];
        fill(begin(ascii), end(ascii), 0);
        int left = 0;
        int right = 0;
        int count = 0;

        while (right < s.size()) {
            while (ascii[s[right]] > 0) {
                ascii[s[left]]--;
                left++;
            }
            ascii[s[right]]++;
            count = max(right - left + 1, count);

            right++;
        }

        return count;
    }
};