#include <iostream>
using namespace std;

// 演習問題5

int main(void){
    char str[] = "hello world!!";
    int cnt = 0;
    
    while(*(str+cnt) != '\0')
        cnt++;

    for(int i = 0;i < cnt/2.0;i++){
        char c = str[i];
        str[i] = str[cnt-i-1];
        str[cnt-i-1] = c;
    }

    printf("%s\n",str);
    return 0;
}