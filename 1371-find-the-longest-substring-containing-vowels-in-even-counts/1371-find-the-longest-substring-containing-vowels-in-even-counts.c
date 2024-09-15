int findTheLongestSubstring(char * s){
    int max = 0;
    int mask = 1;
    mask |= ( 1 << ( 'e' - 'a'));
    mask |= ( 1 << ( 'i' - 'a'));
    mask |= ( 1 << ( 'o' - 'a'));
    mask |= ( 1 << ( 'u' - 'a'));
    for ( int i = 0 ; i < strlen(s) ; i++){
        int sum = 0;
        if ( strlen(s) - i < max ){
            break;
        }
        for ( int j = i ; j < strlen(s) ; j++ ){
            sum ^= ( 1 << ( s[j] - 'a' ));
            if ( (sum & mask) == 0 && (j - i + 1) > max ){
                max = j - i + 1;
            } 
        }
    }
    return max;
}