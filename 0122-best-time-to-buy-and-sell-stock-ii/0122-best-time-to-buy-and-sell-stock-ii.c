int maxProfit(int* prices, int pricesSize) {
    int max_profit = 0;

    for (int i = 1; i < pricesSize; i++){
        if (prices[i] > prices[i - 1]) max_profit += prices[i] - prices[i - 1];
    }

    if (max_profit <= 0){
        return 0;
    }
    else{
        return max_profit;
    }
}