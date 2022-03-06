#include<stdio.h>

int areaOfrect(int l,int b)
{
    int area;
    area =  l*b;
    return area;

}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int area = areaOfrect(a,b);
    printf("%d",area);

    printf("\n");


}
