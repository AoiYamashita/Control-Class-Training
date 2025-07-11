#include <iostream>
using namespace std;

// 演習問題4

int main(void){
    int size = 10;
    int arr[size] = {4,10,7,1,2,5,7,3,2,5};
    for(int i = 0;i < size-1;i++){
        for(int j = 0;j < size-1;j++){
            if(arr[j] > arr[j+1]){
                int c = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = c;
            }
        }
    }
    for(int i = 0;i < size;i++)
        printf("arr[%d] = %d\n",i,arr[i]);
    return 0;
}