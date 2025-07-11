#include <iostream>
using namespace std;

// 演習問題4

int digitSum(int a){
    if(a < 10) return a;
    return digitSum(a/10)+a%10;
}

int main(void){
    printf("%d\n",digitSum(12345));
    return 0;
}