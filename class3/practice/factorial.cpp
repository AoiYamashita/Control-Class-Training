#include <iostream>
using namespace std;

// 演習問題2

int factorial(int n){
    int f = 1;
    for(int i = 1;i <= n;i++)
        f *= i;
    return f;
}

int main(void){
    for(int i = 1;i <= 10;i++)
        printf("%d\n",factorial(i));
    return 0;
}