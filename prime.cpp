#include <iostream>
using namespace std;

int main(){
    for(int i = 2;i < 100;i++){
        bool isPrime = true;
        for(int j = 2;j < i;j++){
            if(i % j == 0)isPrime = false;
        }
        if(isPrime)
            printf("%d\n",i);
    }
    return 0;
}