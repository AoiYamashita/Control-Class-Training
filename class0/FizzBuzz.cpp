#include <iostream>
using namespace std;

int main(){
    for(int i = 1;i <= 100;i++){
        bool flag = true;
        if(i % 3 == 0){
            printf("Fizz");
            flag = false;
        }
        if(i % 5 == 0){
            printf("Buzz");
            flag = false;
        }
        if(flag){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}