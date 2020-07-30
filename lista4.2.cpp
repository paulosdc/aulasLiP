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
        cout << "O número " << numero << " é primo" << endl;
    }else{
        cout << "O número " << numero << " não é primo" << endl;
    }
    return 0;
}
