
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,a,b,c;
    scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);

    a= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    b= sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    c= sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

    if(a>b && a>c)
    {printf("%.2f\n",a);}
    else if(b>a&&b>c)
    {printf("%.2f\n",b);}
    else if(c>a&&c>b)

{printf("%.2f\n",c);}


   return 0;
}
