
#include<stdio.h>
int main(){

    int n,mul=1,i,values;

    scanf("%d",&n);
    for(i=1;i<=n;i++){

    scanf("%d",&values);

        mul*=values;


    }printf("Total Multiplication %d\n",mul);


    return 0;

}
