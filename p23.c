#include<stdio.h>
int main() 
{ int i,j, a[3][3];
       printf("enter array elements:\n");
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               scanf("%d",&a[i][j]);
           }
       }
       printf("The array elements are:\n");
       for(i=0;i<3;i++)
       {
           for(j=0;j<3;j++)
           {
               printf("%d ",a[i][j]);
           }
           printf("\n");
       }
    return 0;
}