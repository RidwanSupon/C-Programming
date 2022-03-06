#include<stdio.h>
int main(){

    int i,j,k,n,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=10;j++){


           {
            for(k=1;k<=j;k++)
            sum+=i;
          }
             printf("%d * %d = %d\n",i,j,sum);
             sum = 0;

        }
              printf("\n");
      }

}
