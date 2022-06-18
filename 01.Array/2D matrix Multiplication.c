#include<stdio.h>
int main(){

    int n,m,i,j;
    printf("Enter Row and coloum Size: ");
    scanf("%d%d",&n,&m);

    int arr[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("arr[%d][%d]: ",i,j);
        scanf("%d",&arr[i][j]);
    }

        printf("\n");
     }
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        printf("%d\t",arr[i][j]);

        if(j==m-1){

        printf("\n");
        }
         }
           }


           printf("\n");
           printf("multiply with 2 then\n\n");



           for(i=0;i<n;i++){
            for(j=0;j<m;j++){
              printf("%d\t",2*arr[i][j]);

                if(j==m-1){

                printf("\n");
        }
         }
           }
           return 0;



}
