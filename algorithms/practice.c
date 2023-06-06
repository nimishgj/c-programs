#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 1000
int A[MAX];


insertionsort(int n){
  int temp,i,j;
  for(i=1;i<n;i++){
    temp=A[i];
    j=i-1;
    while(temp<A[j]&& j>0){
      A[j+1]=A[j];
      j-=1;
    }
    A[j+1]=temp;
  }
}

int main(){
  int i,j,n;
  printf("ENter the number of elements:");
  scanf("%d",&n);
  printf("Array before sorting:");
  for(i=0;i<n;i++){
    A[i]=rand()%100;
    printf("%d ,",A[i]);
  }
  insertionsort(n);

  printf("array after sorting:");
  for(i=1;i<n;i++){
    printf("%d ,",A[i]);
  }
}

