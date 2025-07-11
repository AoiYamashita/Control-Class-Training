#include <iostream>
using namespace std;

int main(void){
    int size = 10;
    int arr[size] = {1,2,3,4,5,6,7,8,9,10};
    for(int i = 0;i < size;i++){
        arr[i] = arr[i]*arr[i];
    }
    for(int i = 0;i < size;i++){
        printf("arr[%d] = %d\n",i,arr[i]);
    }
    return 0;
}
