#include<stdio.h>
//#include<conio.h>
void insertion_sort(int arr[],int n);
int main(){
   int arr[20],n,i;
   printf("enter the no.of integers in the array :"); 
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   insertion_sort(arr,n);
   printf("the sorted array is \n");
   for(i=0;i<n;i++){
      printf("%d\t",arr[i]);
   }
}

void insertion_sort(int arr[],int n){
   int i,j,t;
   for(i=1;i<n;i++){
      t=arr[i];
      j=i-1;
      while(t>arr[j] && j>0){
         arr[j+1]=arr[j];
         j--;
      }
      arr[j+1]=t;
   }
}
   
