#include<stdio.h>
int main(){

    int n,mul=1,i;

    scanf("%d",&n);
    for(i=1;i<=n;i++){

        mul*=i;

    }printf("Multiplication 1 to %d is: %d\n",n,mul);


    return 0;

}
