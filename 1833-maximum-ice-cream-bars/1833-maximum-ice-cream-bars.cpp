class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int icecream_bars[100001] = {0};
        int target = 0;
        int max_bars = 0;

        for (int i = 0; i < costs.size(); i++) {
            icecream_bars[costs[i]]++;
        }

        for (int j = 1; j < 100001; j++) {
            if (icecream_bars[j] >= 1) {
                while (icecream_bars[j] > 0) {
                    if (target + j <= coins) {
                        target += j;
                        max_bars++;
                       
                    }else break;
                    
                    icecream_bars[j]--;
                }
            }
        }

        return max_bars;
    }
};