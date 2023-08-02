#include<stdio.h>
int main(){
   int a[3][3],b[3][3],mul[3][3],i,j,k,l;
   int r1,r2,c1,c2;
   printf("enter the rows of first matrix ");
   scanf("%d",&r1);
   printf("enter the columns of first matrix ");
   scanf("%d",&c1);
   printf("enter the elements of 1st matrix ");
   for(i=0;i<r1;i++){
     for(j=0;j<c1;j++){
        scanf("%d",&a[i][j]);
     }
   }
   printf("enter the rows of first matrix ");
   scanf("%d",&r2);
   printf("enter the columns of first matrix ");
   scanf("%d",&c2);
   printf("enter the elements of 1st matrix ");
   printf("enter the elements of second matrix ");
   for(i=0;i<r2;i++){
      for(j=0;j<c2;j++){
         scanf("%d",&b[i][j]);
      }
   }
   for(i=0;i<r1;i++){
      for(j=0;j<c2;j++){
         mul[i][j]=0;
         for(k=0;k<r2;k++){
            mul[i][j]+=a[i][k]*b[k][j];
         }
         printf("%d ",mul[i][j]);
      }
   printf("\n");
   }
}
