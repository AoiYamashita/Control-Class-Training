#include <iostream>
using namespace std;

int main(void){
    char str[] = "hello world!!";
    int cnt = 0;
    
    while(*(str+cnt) != '\0')
        cnt++;
    
    printf("%d\n",cnt);
    return 0;
}