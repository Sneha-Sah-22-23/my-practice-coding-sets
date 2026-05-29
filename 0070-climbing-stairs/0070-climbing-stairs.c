int climbStairs(int n) {
    if (n == 1){return 1;}
    else if (n == 2){return 2;}
    int cur = 2; int prev = 1; int next = 0;
    while(n > 2){
            next = cur + prev;
            prev = cur;
            cur = next;
            n--;
        }
    return next;
}