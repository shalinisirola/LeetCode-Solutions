int minLengthAfterRemovals(char* s) {
    int count_a = 0, count_b = 0;
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a') count_a++;
        else if (s[i] == 'b') count_b++;
    }

    return abs(count_a - count_b);
    
}
