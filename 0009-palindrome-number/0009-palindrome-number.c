bool isPalindrome(int x) {
    long palindrome = 0; int num = x;
    while( num != 0){
        palindrome = palindrome * 10 + num % 10;
        num = num / 10;
    }

    if ( x != palindrome || x < 0){
        return false;
    }
    else{
        return true;
    }
}