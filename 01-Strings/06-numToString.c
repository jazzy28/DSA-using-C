#include <stdio.h>



void itoa(int n, char s[]){ 
    int i, sign; //sign: positive or negative number
    if((sign = n) < 0)
        n = -n;
    
    i = 0;
    do{
        s[i++] = n%10 + '0'; //'0' show will ascii value of 0(48) then we can add any number to find out their ascii value
    }while((n/=10)>0);
    
    if(sign<0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
  
