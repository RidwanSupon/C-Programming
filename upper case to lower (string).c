#include<stdio.h>
#include<string.h>
int main(){

    char str[100];

    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){

        str[i]=tolower(str[i]);

    }
        printf("%s\n",str);

        return 0;

}

