#include<stdio.h>
int main(){
   int a,b,c,max;
   printf("enter the 1st number");
   scanf("%d",&a);
   printf("enter the 2nd number");
   scanf("%d",&b);
   printf("enter the 3rd number");
   scanf("%d",&c);
   max=a;
   if(b>a){
     max=b;
   }
   if(c>max){
     max=c;
   }
   printf("the greatest number is %d",max);
}                                           
