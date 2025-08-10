#include <iostream>
using namespace std;

// 演習問題5

int fib(int N,int* cnt){
    (*cnt)++;
    if(N == 0)return 0;
    if(N <= 1)return 1;
    return fib(N-1,cnt)+fib(N-2,cnt);
}

int main(void){
    int cnt = 0;
    fib(22,&cnt);
    printf("%d\n",cnt);
    return 0;
}