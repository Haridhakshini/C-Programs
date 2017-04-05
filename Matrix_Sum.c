#include<stdio.h>
int main()
{
int a[50][50],b[50][50],sum[50][5],r,c,i,j;
printf("Enter number of rows: ");
scanf("%d",&r);
printf("Enter number of columns: ");
scanf("%d",&c);
//TAKING IN THE TWO MATRICES
printf("\n Enter elements of the first Matrix:\n");
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
	printf("Enter element %d,%d: ",i+1,j+1);
	scanf("%d",&a[i][j]);
	}
printf("\n Enter elements of the second Matrix:\n");
for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
	printf("Enter element %d,%d: ",i+1,j+1);
	scanf("%d",&b[i][j]);
	}
//ADDING TWO MATRICES
for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
//DISPLAYING THE SUM
 for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
        printf("%d   ",sum[i][j]);
        if(j==c-1)
        	{
                printf("\n\n");
            }
    	}
return 0;
}