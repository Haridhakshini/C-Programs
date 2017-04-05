#include<stdio.h>
int main()
{
int i,n;
float a[100];
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
printf("Enter Number %d: ",i+1);
scanf("%f",&a[i]);
}
for(i=1;i<n;i++)
{
if(a[0]<a[i])
a[0]=a[i];
}
printf("Largest element = %f\n",a[0]);
return 0;
}