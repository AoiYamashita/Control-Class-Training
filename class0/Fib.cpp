#include <iostream>
using namespace std;

int main(){
    int fib_n1 = 0;// n-1
    int fib_n2 = 0;// n-2
    int fib_n = 1;
    printf("%d\n",0); // fib_0 = 0
    while(fib_n <= 100){
        printf("%d\n",fib_n);
        fib_n2 = fib_n1;
        fib_n1 = fib_n;
        fib_n = fib_n1 + fib_n2;
    }
    return 0;
}