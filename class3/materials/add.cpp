#include <iostream>
using namespace std;

int add(int a,int b){
    return a + b;
}

int main(void){
    int c = add(1,3);// 1 + 3
    printf("%d\n",c);
    c = add(4,-3);// 4+(-3)
    printf("%d\n",c);
    c = add(9,-100); // 9+(-100)
    printf("%d\n",c);
    return 0;
}
