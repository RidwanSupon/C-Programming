#include<stdio.h>
int main(){

    char input[100];
    int vow,consonant;
    vow=consonant=0;

    fgets(input,sizeof(input),stdin);


    for(int i=0;input[i]!='\0';i++){

        input[i]=tolower(input[i]);

        if(input[i]=='a'||input[i]=='e'||input[i]=='i'||input[i]=='o'||input[i]=='u')
        ++vow;

        else if(input[i]>='a' && input[i]<='z')
            ++consonant;
    }
        printf("Vowels are: %d\n",vow);
        printf("consonant are: %d\n",consonant);

}
