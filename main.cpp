
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include "algorithms.h"
#include <time.h>
#include <vector>
int main (void){

    int N;
    srand(time (NULL));
    N = 20;
    int * v = (int*)malloc((sizeof(int)*N));
    for(int i =0; i < N; i++){
        v[i]= rand()%100;
    }
    printVec(v, N);





    return 0;
}
