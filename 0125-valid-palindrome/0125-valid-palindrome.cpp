class Solution {
public:
    bool isPalindrome(string s) {
        string phrase; string palindrome;
        for(char i : s){
            if(isalnum(i)) phrase += tolower(i);
        }

        for(int i = phrase.size() - 1; i >= 0; i--){
            palindrome += phrase[i];
        }

        return phrase == palindrome;
    }
};