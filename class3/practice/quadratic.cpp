#include <iostream>
using namespace std;

// 演習問題1

void quadratic(float a, float b,float c){//a*x^2+b*x+c
    printf("%f*x^2 + %f*x + %f\n",a,b,c);
    float flag = b*b - 4*a*c;
    if(flag == 0){
        printf("%f/%f\n",-b,2*a);
    }else if (flag > 0){
        printf("%f±sqrt(%f)/%f\n",-b,flag,2*a);
    }else if (flag < 0){
        printf("%f±sqrt(%f)i/%f\n",-b,-flag,2*a);
    }
}

int main(void){
    quadratic(1,2,1);
    quadratic(1,-5,6);
    quadratic(1,1,1);
    return 0;
}