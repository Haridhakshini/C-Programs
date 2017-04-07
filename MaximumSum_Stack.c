//C++ program to calculate maximum sum with equal stack sum.
#include<stdio.h>
#include<stdlib.h>
int maxsum(int a[],int b[],int c[],int A,int B,int C);
int main()
{
  int stack1[] = { 4, 6, 78, 1, 1 };
  int stack2[] = { 4, 9, 2 };
  int stack3[] = { 1, 24, 4, 1 };
  int n1 = sizeof(stack1)/sizeof(stack1[0]);
  int n2 = sizeof(stack2)/sizeof(stack2[0]);
  int n3 = sizeof(stack3)/sizeof(stack3[0]);
printf("%d\n",maxsum(stack1, stack2, stack3, n1, n2, n3));
  return 0;
} 
int maxsum(int stack1[],int stack2[],int stack3[],int n1,int n2,int n3)
{
  int sum1=0,sum2=0,sum3 = 0;
  for (int i=0; i < n1; i++)
      sum1=sum1+stack1[i];
  for (int i=0; i < n2; i++)
      sum2=sum2+stack1[i];
  for (int i=0; i < n3; i++)
      sum3=sum3+stack1[i];
  int top1 =0, top2 = 0, top3 = 0;
  int ans = 0;
  while (1)
  {
      if ((top1==n1)||(top2==n2)||(top3==n3))
         return 0;
      if ((sum1==sum2)&&(sum2==sum3))
         return sum1;
      if ((sum1 >= sum2)&&(sum1 >= sum3))
         sum1=sum1-stack1[top1++];
      else if((sum2 >= sum3)&&(sum2 >= sum3))
         sum2=sum2-stack2[top2++];
      else if((sum3 >= sum2)&&(sum3 >= sum1))
         sum3=sum3-stack3[top3++];
   }
}
