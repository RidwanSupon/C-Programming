#include<stdio.h>
int main(){

 int i=10;
 int *p;

 p = &i;
 printf("Adress of i is: %x \n",&i);
 printf("Adress stored in p is: %x \n",p);
 printf("Value of *p is: %d \n",*p);

 i = 122;
  printf("Value of *p is: %d \n",*p);
  printf("Adress stored in p is: %x \n",p);
  printf("Adress of i is: %x \n",&i);

 return 0;

}
