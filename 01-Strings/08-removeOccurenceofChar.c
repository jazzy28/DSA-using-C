#include <stdio.h>

void squeeze(char s[], int c){ //c will have the ascii value of particular char 
    int i, j;//pointers
    for(i=j=0; s[i] != '\0'; i++){
        if(s[i] != c){
            s[j] = s[i];
            j++;
        }
    }
}
