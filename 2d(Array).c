#include<stdio.h>
int main(){


    int arr[2][3];

    int i,j;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){

        printf("arr[%d][%d]: ",i,j);
        scanf("%d",&arr[i][j]);
        }
         }

         for(i=0;i<2;i++){
          for(j=0;j<3;j++){
              printf("%d",arr[i][j]);
          if(j==2){
          printf("\n");
          }

          }

         }

    }

