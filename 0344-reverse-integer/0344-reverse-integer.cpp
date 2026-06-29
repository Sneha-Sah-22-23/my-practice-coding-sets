void reverseString(char* s, int sSize) {
    int fpos = 0;
    int lpos  = sSize - 1;
    while (fpos < lpos){
        char temp = s[fpos];
        s[fpos] = s[lpos];
        s[lpos] = temp;
        fpos++; 
        lpos--;
    }
}
