#include<stdio.h> #include <stdlib.h> void main()
{
int i,j,m,n,p,q;
int a[10][10], b[10][10], c[10][10];
printf("\nEnter no of rows and column of matrixA:");
scanf("%d%d",&m,&n);
printf("\nEnter no of rows and column of matrixB:");
scanf("%d%d",&p,&q);
if(m!=p && n!=q)
{
printf("\n Matrix cannot be added.");
exit(0); }
printf("\n Matrix can be added");
printf("\n Enter elements of matrix A:");
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
    printf("Enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);
  }
for(i=0;i<p;i++){
  for(j=0;j<q;j++){
    printf("Enter b[%d][%d]",i,j);
    scanf("%d",&b[i][j]);
  }
}

for(i=0;i<m;i++){
  for(j=0;j<n;j++){
    c[i][j]=a[i][j]+b[i][j];
  }
}

printf("The resultant matrix is: \n");
for(i=0;i<m;i++){
  for(j=0;j<n;j++){
    printf("[%d]\t",c[i][j]);
  }
}
}
