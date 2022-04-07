#include<stdio.h>
int main(){

    char str[100];
    int l=0;
    printf("Enter string: ");
    fgets(str,sizeof str,stdin);

    while(str[l]!='\0'){

       l++;
        printf("Length of this String is: %d\n",l-1);

    }



}
