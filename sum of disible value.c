#include<stdio.h>
int main(){

    int n,m,i,q,sum=0;

    scanf("%d%d%d",&n,&m,&q);
    for(i=n;i<=m;i++)
    {
        if(i%q==0)

        sum+=i;

    }printf("%d\n",sum);

    return 0;

}

