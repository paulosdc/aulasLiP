#include <iostream>
using namespace std;
int main(){
    int x = 3.2 ; //como � do tipo int, vai arredondar para 3
    cout << x << endl; //x = 3
    cout << 3 / 2 << endl; // 3/2=1.5, mas como ta sendo dividido por numero inteiro (2), a resposta vai ser do tipo int, ent�o arredonda pra 1
    cout << 2.5 + 1 / 2 << endl; // como tem o 2.5 a resposta ser� do tipo float, mas a divis�o � por inteiro ent�o fica 2.5 + 0.5 (que � arredondado pra 0) = 2.5
    cout << 3 + 1.0 / 2 << endl; // a divis�o tem um numero float ent�o fica do tipo float, 3+1.0/2 = 3+0.5 = 3.5
    return 0;
}
