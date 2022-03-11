#include<stdio.h>
int main(){

    double i,j,avg=0,sum=0,n,num;
    scanf("%lf",&n);
    for(i=1;i<=n;i++){
    scanf("%lf",&num);
    sum +=num;

    }
    avg = sum/n;

    printf("average is: %.2lf\n",avg);



}
