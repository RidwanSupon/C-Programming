#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n>100 || n<=0){
        printf("invalid Id\n");
    }
      else if(n%4==0)
    {   printf("Section 4\n");

    }
    else if(n%4==1)
     { printf("Section 3\n");}
    else if(n%4==2)
     { printf("Section 2\n");}
    else if(n%4==3)
     { printf("Section 1\n");}



    return 0;
}
