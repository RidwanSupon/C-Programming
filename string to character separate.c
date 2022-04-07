#include<stdio.h>
 int main(){

    char str[100];
    int length=0;
    printf("Enter string: ");
    fgets(str,100,stdin);

    while(str[length]!='\0'){

    printf("%c ",str[length]);

    length++;

    }

    printf("\n");

    return 0;

 }
