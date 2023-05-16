#include <stdio.h>

void sort(int a[], int n);
int main(){
  int n;
  printf("Enter the number of elements: ");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    printf("Enter the elemnt arr[%d]",i);
    scanf("%d",&arr[i]);
  }
  // printf("Array before sorting is: %d",arr);
  for(int i = 0;i<n;i++){
    printf("arr[%d] is %d\n",i,arr[i]);
  }
  sort(arr,n);
}
void sort(int a[],int n){
  int i,j,temp;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]>a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf("The array after sorting is");
  for(int i = 0;i<n;i++){
    printf("arr[%d] is %d\n",i,a[i]);
  }

}
