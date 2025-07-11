#include <iostream>
using namespace std;

void not_swap(int a,int b){
    int c = a;
    a = b;
    b = c;
}

void swap(int* a,int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void){
    int i = 3;
    int j = 5;
    printf("init values\n i = %d, j = %d\n",i,j);
    not_swap(i,j);
    printf("not swap\n i = %d, j = %d\n",i,j);
    swap(&i,&j);
    printf("swap\n i = %d, j = %d\n",i,j);
    return 0;
}