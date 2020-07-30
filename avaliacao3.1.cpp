#include <iostream>
using namespace std;
int main(){
    int x, y, maiorDivisor, maior, menor;
    cin >> x >> y;
    if(x>=y){
        maior = x;
        menor = y;
    }else{
        maior = y;
        menor = x;
    }
    int divisor = 1;
    do{
        if(x%divisor==0 && y%divisor==0){
            maiorDivisor = divisor;
        }
        divisor++;
    }while(divisor<=maior);
    if(x==0 && y ==0){
        maiorDivisor = 0;
    }
    cout << "MDC(" << maior << "," << menor << ") = " << maiorDivisor;
    return 0;
}
