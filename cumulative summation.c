#include<stdio.h>
int main(){

    int n,temp[15],temp2[15],i;
    int sum = 0;

    scanf("%d",&n);


     for(i=1;i<=n;i++){
        scanf("%d",&temp[i]);
     }
     for(i=1;i<=n;i++){
        sum+=temp[i];
        temp2[i] = sum;
          printf("%d ",temp2[i]);
     }

}


