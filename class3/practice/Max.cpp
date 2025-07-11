#include <iostream>
using namespace std;

// 演習問題6
int Max(int arr[],int size){
    int maxnum = arr[0];
    for(int i = 0;i < size;i++){
        if(maxnum < arr[i]) maxnum = arr[i];
    }
    return maxnum;
}

int main(void){
    int size = 10;
    int arr[size] = {4,10,7,1,2,5,7,3,2,5};
    printf("%d\n",Max(arr,size));
    return 0;
}