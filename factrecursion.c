#include<stdio.h>
int fact(int n){
   if(n>1){
      return n*fact(n-1);
   }
   else{
      return 1;
   }
}
int main(){
   int n,f;
   printf("enter the number :");
   scanf("%d",&n);
   f=fact(n);
   printf("the factorial of the given number is %d\n",f);
}
