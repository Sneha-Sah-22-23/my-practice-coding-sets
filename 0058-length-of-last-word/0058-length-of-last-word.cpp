class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = s.size() - 1;
        int length = 0;
        while(s[last] == ' '){
            last--;
        }

        while(last >= 0){
            if (s[last] != ' '){
                length++;
            }
            else break;

            last--;
        }

        return length;
    }
};