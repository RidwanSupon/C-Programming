#include<stdio.h>
int main(){

        int n,flag=0;
        scanf("%d",&n);
        if (n==1 || n==0){

        flag = 1;

        }

            for(int i=2;i<=n/2;i++){
            if(n%i == 0){
            flag = 1;

            break;}}



        if(flag==0){
        printf("%d is prime\n",n);}

        else
        printf("%d is Not prime\n",n);


}
