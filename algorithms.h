void swap ( int &a, int &b);
int  CompareAsc (const void * pa,const void *pb);
int  CompareDesc (const void * pa,const void *pb);
void BubbleSort(int * v, unsigned int n, int (*CompFunc)(const void * pa, const void * pb));
void printVec(int * v, unsigned int size);