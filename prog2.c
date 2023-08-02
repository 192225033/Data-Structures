#include<stdio.h>
int main(){
   int n,i,e=0,o=0,a=0;
   printf("enter the number of numbers :");
   scanf("%d",&n);
   int even[n],odd[n];
   for(i=0;i<n;i++){
      printf("enter the number %d : ",i);
      scanf("%d",&a);
      if(a%2==0){
        even[e]=a;
        e++;
      }
      else{
        odd[o]=a;
        o++;
      }
   }
   printf("the even numbers are \n");
   for(i=0;i<e;i++){
      printf("%d ",even[i]);
   }
   printf("\nthe odd numbers are \n");

   for(i=0;i<o;i++){
      printf("%d ",odd[i]);
   }
}
        
        
