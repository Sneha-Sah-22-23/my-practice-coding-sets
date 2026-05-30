int strStr(char* haystack, char* needle) {
    int i = 0; int j = 0;
    while(haystack[i] != '\0'){
        if(needle[j] == '\0') return i-j;
        if (haystack[i] == needle[j]){
            i++; j++;
        }
        else{
            i = (i - j) + 1;
            j = 0;
        }
    }
    if (needle[j] == '\0') return i-j;
    return -1;
}