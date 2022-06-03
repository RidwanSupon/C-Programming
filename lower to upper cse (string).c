#include<stdio.h>
int main(){

    char input[100];
    int vow,consonant,i;


    fgets(input,sizeof(input),stdin);

    for(int i=0;input[i]!='\0';i++){

        input[i]=toupper(input[i]);

    }
        printf("%s\n",input);

        return 0;

}
