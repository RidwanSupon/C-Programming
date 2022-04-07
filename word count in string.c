#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int main(){

    char str[100];
    int l=0,i=0,w=1;
    printf("enter string: ");
    fgets(str,100,stdin);
    l=strlen(str);

    while(str[i]!='\0'){   //if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')

    if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
     {
       w++;
     }
      i++;
    }
    printf("Total character %d\n",i-1);
    printf("Total word: %d\n",w-1);
    int j=0;
    printf("Reverse string: ");
    for(j=i;j>=0;j--){


    printf("%c",str[j-1]);

    }



    return 0;

}
