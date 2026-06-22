class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map <char, int> word;
        string str = "balon";
        for(int i = 0; i < 5; i++){
            word[str[i]] = 0;
        }

        int balloon_count = 0;
        for(int i = 0; i < text.size(); i++){
            for(int j = 0; j < 5; j++){
                if (text[i] == str[j]) word[str[j]] += 1;
            }
        }
        
        while(word['b'] > 0 && word['a'] > 0 && word['l'] > 1 && word['o'] > 1 && word['n'] > 0){
            if (word['b'] >= 1 && word['a'] >= 1 && word['l'] >= 2 && word['o'] >= 2 && word['n'] >= 1){
                balloon_count += 1;
                word['b']--; word['a']--; word['l']-=2; word['o']-=2; word['n']--;
            }
        }

        return balloon_count;
    }
};