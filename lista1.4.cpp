#include <iostream>
using namespace std;
int main(){
    int x = 3.2 ; //como é do tipo int, vai arredondar para 3
    cout << x << endl; //x = 3
    cout << 3 / 2 << endl; // 3/2=1.5, mas como ta sendo dividido por numero inteiro (2), a resposta vai ser do tipo int, então arredonda pra 1
    cout << 2.5 + 1 / 2 << endl; // como tem o 2.5 a resposta será do tipo float, mas a divisão é por inteiro então fica 2.5 + 0.5 (que é arredondado pra 0) = 2.5
    cout << 3 + 1.0 / 2 << endl; // a divisão tem um numero float então fica do tipo float, 3+1.0/2 = 3+0.5 = 3.5
    return 0;
}
