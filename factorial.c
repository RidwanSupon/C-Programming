#include<stdio.h>
int main(){

    int n,factorial=1,i;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
         factorial*=i;

    }


    printf("%d factorial is: %d\n",n,factorial);

    return 0;

}
