#include<stdio.h>
int main(){
    int n,y,i;
    float salary,sum=0;
    printf("Employ number\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%f",&salary);
        sum += salary;
    }
    printf("Total amount have sam\n");
    scanf("%d",&y);

    if(sum<=y/2){
        printf("sam paid salary\n");
    }
    else printf("sam is not paid salary\n");

    return 0;

}
