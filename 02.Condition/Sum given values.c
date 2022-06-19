
#include<stdio.h>
int main(){

    int n,sum=0,i,values;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&values);
        sum+=values;

    }
    printf("Total sum: %d\n",sum);


    return 0;
}
