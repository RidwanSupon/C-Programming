#include<stdio.h>
int main(){

    char str[100];
    char count[26];
    fgets(str,sizeof str,stdin);
    int i;

       for(i=0;str[i]!='\0';i++){

       if(str[i]>=97 && str[i]<=122)
       {

        count[str[i]-97]++;

       }
          else if(str[i]>=65 && str[i]<=90)
          {

           count[str[i]-65]++;

          }
        }

         for(i=0;i<26;i++){

         if(count[i]!=0){

        printf("%c is %d times\n",i+97,count[i]);

       }

    }

  return 0;
}
