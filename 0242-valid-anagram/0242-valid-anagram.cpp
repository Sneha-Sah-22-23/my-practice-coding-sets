class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> map;
        for (char ele : s) {
            map[ele]++;
        }

        for (char ele : t) {
            map[ele]--;
        }

        for (auto& pair : map) {
            if (pair.second != 0) {
                return false;
            }
        }

        return true;
    }
};