
#include<stdio.h>
int main(){

    int n;

    scanf("%d",&n);
    if(n<100 && n>=0){

        if(n%4==0){
        printf("section 4\n");
        }
        else if(n%4==1){
        printf("section 3\n");

        }
        else if(n%4==2){
        printf("section 2\n");
        }
        else if(n%4==3){
        printf("section 1\n");
        }
    }

    else
    printf("Invalid\n");

}
