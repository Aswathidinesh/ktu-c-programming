#include<stdio.h>
void main()
{
int i,n,A[20],large;
printf("enter the size in array");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the number ");
scanf("%d",&A[i]);
}
large=A[0];
for(i=0;i<n;i++)
{
if(large<A[i])
large=A[i];
}
printf("large=%d",large);
}
