#include<stdio.h>

int main(){

    int count=0;
    char s[50], *ptr;
    printf("\nEnter a String: ");
    gets(s);
    ptr=s;
    while(*ptr != '\0'){

    count ++;
     ptr ++;

    }
    printf("Length of %s is:- %d\n\n",s,count);
    
    return 0;
}