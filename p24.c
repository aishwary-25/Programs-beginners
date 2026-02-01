//this program is to print the diagonal sum of a square matrix
#include <stdio.h>
 int main()
 {
    int i, a[3][3], sum=0;
    printf("enter array elements:\n");
    for(i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        sum=sum+a[i][i];
    }
    printf("The diagonal sum is: %d\n", sum);
    return 0;
}