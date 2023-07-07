#include<stdio.h> void main()
{
int i,n,pos,num, a[10];
printf("Enter the number of element :\n");
scanf("%d",&n);
printf("Enter element:\n");
for(i=0;i<n;i++)
{
printf("a[%d]=",i);
scanf("%d",&a[i]); }
printf("\nEnter the pos where the no. is to be inserted :");
scanf("%d",&pos);
printf("\nEnter the the no. is to be inserted :");
scanf("%d",&num);
for(i=n-1;i>=pos;i--)
a[i+1]=a[i];
n=n+1;
a[pos]=num;
printf("\n Display array after insertion:\n");
for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,a[i]); }
}
}
