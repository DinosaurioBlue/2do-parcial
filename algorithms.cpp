#include "algorithms.h"
#include <stdio.h>
void swap ( int &a, int &b){
    int aux = b;
    b = a;
    a = aux;
}
int CompareAsc(void * pa, void * pb){
	return (*(int*)pa - *(int*)pb);
}
int CompareDesc(void * pa, void * pb){
	return (*(int*)pb - *(int*)pa );
}

void BubbleSort(int * v, unsigned int n, int (*CompFunc)(const void * pa, const void * pb)){
    for (int i = 0; i < (n - 1); i++)
    for (int j = (n - 1); j > i; j--)
   if (CompFunc(&v[j], &v[j - 1]) >= 0) {
        swap(v[j], v[j - 1]);
    }
   
}
void printVec(int * v, unsigned int size){
    printf("vec: ");
    for(int i =0; i < size; i++){
        printf(" %d ",v[i]);
        putchar('\n');
    }
}