#include <iostream>
using namespace std;
int main(){
    int numero, i = 0, divisor = 1;
    cin >> numero;
    while(divisor<=numero){
        if(numero%divisor==0){
            i++;
        }
        divisor++;
    }
    if(i==2){
        cout << "O n�mero " << numero << " � primo" << endl;
    }else{
        cout << "O n�mero " << numero << " n�o � primo" << endl;
    }
    return 0;
}
