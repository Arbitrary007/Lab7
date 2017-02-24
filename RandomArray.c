#include <stdio.h>

void main(){
  int rand_array[1000];
  int i=0;
  for(i=0; i<1000; i++){
    rand_array[$i]=random();
  }
  printf("Here's the results of making an array of random integers: \n");
  for(i=0; i<1000; i++){
    printf("%d ", rand_array[$i]);
  }
}
