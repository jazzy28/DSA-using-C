#include <stdio.h>

char *strcpy(char *s, char*t){ //char *s = char s[]
    int i = 0;
    while((*s = *t)!='\0'){
        s++;
        t++;
    }
    return s;
}
