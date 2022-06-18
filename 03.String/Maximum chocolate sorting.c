#include<stdio.h>
int main(){

    int i,j;

    int chocolate[5];

    for(i=0;i<5;i++){
    printf("# %d: ",i+1);
    scanf("%d",&chocolate[i]);

    }
    for(i=0;i<5;i++){
        for(j=0;j<5 && j!=i;j++){

        if(chocolate[i]>chocolate[j]){

        int temp = chocolate[j];
        chocolate[j] = chocolate[i];
        chocolate[i] = temp;

        }


        }

    }
    printf("\nThey choosen first: ");

    printf("%d %d \n",chocolate[0],chocolate[1]);



    return 0;

}
