#include <iostream>
using namespace std;

// 演習問題3

int fib(int N){
    if(N == 0)return 0;
    if(N <= 1)return 1;
    return fib(N-1)+fib(N-2);
}

int main(void){
    printf("%d\n",fib(22));
    return 0;
}