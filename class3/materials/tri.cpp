#include <iostream>
using namespace std;

//再帰処理なし
// int main(void){
//     int size = 4;
//     for(int i = 1;i <= size;i++){
//         for(int j = 0;j < i;j++){
//             printf("@");
//         }
//         printf("\n");
//     }
//     for(int i = size-1;i > 0;i--){
//         for(int j = 0;j < i;j++){
//             printf("@");
//         }
//         printf("\n");
//     }
//     return 0;
// }

void tri(int cnt,int size){
    if(cnt >= size)return;
    for(int i = 0;i <= cnt;i++)
        printf("@");
    printf("\n");
    tri(cnt+1,size);
    for(int i = 0;i < cnt;i++)
        printf("@");
    printf("\n");
}

int main(void){
    tri(0,4);
    return 0;
}