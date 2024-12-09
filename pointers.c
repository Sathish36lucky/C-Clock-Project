#include<stdio.h>
#include<stdlib.h>
int main() {
 int*dynamicArray;
 dynamicArray = (int*)malloc(5*sizeof(int));

 if(dynamicArray== NULL){
  printf("Memory Allocated Failed.\n");
  return 1;
 }
 for(int i=0;i<=5;i++){
  dynamicArray[i]=i*10;
 }
 for(int i=0;i<=5;i++){
  printf("dynamicArray[%d]=%d\n",i,dynamicArray[i]);
 }
 free(dynamicArray);
  return 0;
}
