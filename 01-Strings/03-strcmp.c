#include <stdio.h>

void strcmp(char *s, char *t){ //char *s = char s[]
    for(; *s == *t; s++; t++){
        if(*s == '\0'){ //if s has reached the end
            return 0;
        }
    return *s - *t;
    }
    
}
