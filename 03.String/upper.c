#include<stdio.h>
int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);

    for(int i=0;s[i]!='\0'; i++){
        if(s[i] >= 97 && s[i] <= 122){
            s[i] = s[i] - 32;
        }
        else{

        }
    }
    printf("%s\n",s);


}
