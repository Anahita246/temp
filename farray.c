#include <stdio.h>
#include <stdlib.h>
#include "float_array.h"

void mallocate(farray *array, int size) {
	array->data = (float *) malloc(size * sizeof(float));
	array->size = size;
}

void callocate(farray *array, int size) {
	array->data = (int *) calloc(size, sizeof(float));
	array->size = size;
}
float access_value(farray *array, int index){
return(array->data[index]);
}

 int set_value(farray *array, int index, float value){
	 array->data[index]=value;
 }

void print_farray(farray *array){
	int i;
	for(i=0;i<sizeof(array);i++)
	      printf("Element[%d] = %d\n", i, array[i] );
	 }
void free_farray(farray *array){
	  free(array);
}
