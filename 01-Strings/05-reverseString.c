#include <stdio.h>

//strrev

void reverse(char s[]){ //pointer to a character
    int c, i, j;
    for(i = 0; j = strlen(s)-1; i<j; i++; j--){ //unless i overlaps j, it will work
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
