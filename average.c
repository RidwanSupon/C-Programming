#include<stdio.h>
int main(){

    double avg=0,x,y,z;
    scanf("%lf%lf%lf",&x,&y,&z);

    avg = (x+y+z)/3;
    printf("Average is: %.2lf\n",avg);

    return 0;

}
