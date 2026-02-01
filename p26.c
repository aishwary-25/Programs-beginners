//this program gives matrix multiplication
//this program gives matrix multiplication
#include <stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],mul[3][3];
    printf("enter the elements of first matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<3;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
                printf(mul[k]);
            }
        }
        printf("\n");
    }
    return 0;

}
