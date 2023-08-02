#include<stdio.h>
int main(){
   int age,i;
   printf("enter age");
   scanf("%d",&age);
   if(age<18){
      printf("not eligible for voting");
   }
   else{
      printf("Eligible for voting");
   }
}
