#include<stdlib.h>
#include"array_utils.h"

int contains(const int *arr, int size, int x){
   for(int i= 0;i<size;i++){
       if(arr[i] == x)return 1;
   }
   return 0;
}
int containsWithin(const int *arr, int size, int x, int i, int j){
   while(i<=j){
       if(arr[i] == x)
       return 1;
       i++;
   }
   return 0;
}
int * paddedCopy(const int *arr, int oldSize, int newSize){
   int * newArr = (int*)malloc(newSize*sizeof(int));
   if(newSize<=oldSize){
       for(int i=0;i<newSize;i++){
           newArr[i] = arr[i];
       }
   }
   else{
       for(int i=0;i<oldSize;i++){
           newArr[i] = arr[i];
       }
   }
   return newArr;
}
void reverse(int *arr, int size){
   int i=0,j=size-1;

   while(i<j){
       int temp = arr[i];
       arr[i] = arr[j];
       arr[j] = temp;
       i++;
       j--;
   }
}
int * reverseCopy(const int *arr, int size){
   int * newArr = (int*)malloc(size*sizeof(int));
   for(int i=0;i<size;i--){
       newArr[i] = arr[size-i-1];
   }
   return newArr;
}
