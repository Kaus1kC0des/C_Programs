#include <stdio.h>


int main(){
  int size;
  printf("Enter the size of the list");
  scanf("%d",&size);

  int arr[size];

  for(int i=0;i<size;i++){
    printf("Enter arr[%d]",i);
    scanf("%d",&arr[i]);
    printf("\n");
  }


  int end = size-1;
  int cur;
  int pos;
  int temp;

  for(pos=0;pos<size;pos++){
    for(cur=0;cur<end;cur++){
      if(arr[cur]>arr[cur+1]){
        temp = arr[cur+1];
        arr[cur+1] = arr[cur];
        arr[cur] = temp;
      }
    }
  }

  for(int i =0;i<size;i++){
    printf("%d\t",arr[i]);
  }


}
