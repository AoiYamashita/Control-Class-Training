#include <iostream>
using namespace std;

int main(){
    float pi_4 = 0; // pi/4
    for(int i = 0;i < 5000;i++){
        if(i % 2 == 0){
            pi_4 += 1.0/(2*i+1);
        }
        else{
            pi_4 -= 1.0/(2*i+1);
        }
    }
    printf("%f\n",pi_4*4.0);
    return 0;
}