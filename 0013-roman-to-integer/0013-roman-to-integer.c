int getIntValue(char c){
    switch (c){
            case 'I':
            return 1;
            case 'V':
            return 5;
            case 'X':
            return 10;
            case 'L':
            return 50;
            case 'C':
            return 100;
            case 'D':
            return 500;
            case 'M':
            return 1000;
            default: return 0;}
}


int romanToInt(char* s) {
    int i = 0; int num = 0;
    while (s[i] != '\0'){
        int l = getIntValue(s[i]); int r =0;
        if (s[i+1] != '\0'){
            r = getIntValue(s[i+1]);
        }

        if(l < r){
            num -= l;
            i ++;
        }
        else{
            num += l;
            i++;
        }
    }
    return num;
}