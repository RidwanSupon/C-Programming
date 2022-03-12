#include<stdio.h>
int main(){

int n,sum=0;
int t1=0;
int t2=1;

sum=t1+t2;

scanf("%d",&n);

for(int i=1;i<=n;i++){
    printf("%d\n",t1);

    t1=t2;
    t2=sum;
    sum = t1+t2;

}

}
