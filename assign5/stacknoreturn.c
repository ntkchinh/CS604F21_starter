//Any stack address (adderess of local vars, address of parameters, and array on stack) 
  //should not  be returned to caller because where the address points to
  //will be recycled right after callee returns
  //The following code suffers this use-garbage-value memory bug, please fix it
  //Your code will be tested against Valgrind to ensure there are no memory violations

#include <stdio.h>
#include <stdlib.h>
void makearray(int arr[], int size, int base){
  int j;

  for(j=0;j<size;j++)
    arr[j] = base*=2; //doubling base

  // return array;
}

int main(){
  // int * a1 = makearray(5,2);
  // int * a2 = makearray(10,3);
  int a1 [5];
  int a2 [10];
  makearray(a1, 5, 2);
  makearray(a2, 10, 3);
  int j, sum=0;

  for(j=0;j<5;j++){
    printf("%d ",a1[j]);
    sum+=a1[j];
  }
  printf("\n");

  for(j=0;j<10;j++){
    printf("%d ",a2[j]);
    sum+=a2[j];
  }
  printf("\n");

  printf("SUM: %d\n", sum);
  // free(a1);
  // free(a2);
}
