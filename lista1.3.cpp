#include <iostream>
using namespace std;
int main(){
    int x=0;
    int y=0;
    cout<<x++ + --y<<endl; //x usa operador pos fixado e y usa pre fixado, entao x = 0 e y = -1, logo o resultado é -1
    //o incremento do x acontece e fica x = 1; o y ja havia sido decrementado y = -1
    cout<<x<<y<<endl; //1 -1
    cout<<3+5/10*2<<endl; // primeiro a divisão -> 3+ 0.5 * 2 -> como é int, o 0.5 vira 0 -> depois a multiplicação -> resultado = 3
    cout<<3*x++-5<<endl; //x = 1 pois o operador é pos fixado, então 3*1-5= -2
    //acontece o incremento e fica x = 2;
    cout<<100/4*2/5-2<<endl; // primeiro a divisão -> 25*2/5-2 -> faz a multiplicacao -> 50/5-2 -> divisão -> 10-2 -> subtração -> resultado = 8
    cout<<++x/2.0<<endl; //operador pre fixado então fica x = 3; faz a divisão 3/2.0 = 1.5; como tem o 2.0 já da a entender q o resultado será do tipo float ou double
    cout<<2*x++/--y<<endl; //operador pos fixado, entao x continua x=3, y fica y=-2 pois o operador é pre fixado; 2*3/-2; primeiro a multiplicação -> 6/-2; divisão -> resultado = -3
    return 0;
}
