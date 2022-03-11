#include<stdio.h>
int main()
{
    double r,volume;

    scanf("%lf",&r);
    volume = (4/3)*(3.1416)*(r*r*r);

    printf("Volume of the sphere is: %.2lf",volume);

    return 0;

}
