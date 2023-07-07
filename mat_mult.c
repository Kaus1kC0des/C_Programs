#include<stdio.h>
#include <stdlib.h>
void main()
{
int i,j,m,n,p,q,k;
int a[10][10], b[10][10], c[10][10];
printf("\nEnter no of rows and column of matrixA:");
scanf("%d%d",&m,&n);
printf("\nEnter no of rows and column of matrixB:");
scanf("%d%d",&p,&q);
printf("\n Enter elements of matrix A:\n"); for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("\n Enter elements of matrix B:\n"); for(i=0;i<p;i++)
for(j=0;j<q;j++)
scanf("%d",&b[i][j]);
if(n==p) {
for(i=0;i<m;i++){
  for(j=0;j<q;j++)
  {
  c[i][j]=0;
  for(k=0;k<n;k++) c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
  }
}
else {
printf("\n Matrix cannot be multiplied");
exit(1); }
printf("\n Display matrix A:\n"); for(i=0;i<m;i++)
{
for(j=0;j<n;j++) printf("%d\t",a[i][j]);
printf("\n"); }
printf("\n Display matrix B:\n");
for(i=0;i<p;i++)
{
  for(j=0;j<q;j++){
    printf("%d\t",b[i][j]);
  }
printf("\n"); }
printf("\n Display Product:\n");
for(i=0;i<m;i++)
{
  for(j=0;j<q;j++){
    printf("%d\t",c[i][j]);
  }
printf("\n");
}
}
}
