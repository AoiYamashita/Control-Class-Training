#include <iostream>
using namespace std;

int main(void){
    int size = 10;
    int arr[size] = {4,10,7,1,2,5,7,3,2,5};
    for(int i = 0;i < size;i++){
        printf("arr[%d] = %d\n",i,*(arr+i));
    }
    return 0;
}