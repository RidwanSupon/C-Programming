#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main(){

    char arr[100];
    int i,l=0;

    printf("Enter string: ");
    fgets(arr,100,stdin);
    l= strlen(arr);
    printf("Reverse string is:");
    for(i=l-1;i>=0;i--){

    printf("%c",arr[i]);

    }
     printf("\n");

     return 0;

 }
