#include <iostream>
using namespace std;
int main(){
    int x=0;
    int y=0;
    cout<<x++ + --y<<endl; //x usa operador pos fixado e y usa pre fixado, entao x = 0 e y = -1, logo o resultado � -1
    //o incremento do x acontece e fica x = 1; o y ja havia sido decrementado y = -1
    cout<<x<<y<<endl; //1 -1
    cout<<3+5/10*2<<endl; // primeiro a divis�o -> 3+ 0.5 * 2 -> como � int, o 0.5 vira 0 -> depois a multiplica��o -> resultado = 3
    cout<<3*x++-5<<endl; //x = 1 pois o operador � pos fixado, ent�o 3*1-5= -2
    //acontece o incremento e fica x = 2;
    cout<<100/4*2/5-2<<endl; // primeiro a divis�o -> 25*2/5-2 -> faz a multiplicacao -> 50/5-2 -> divis�o -> 10-2 -> subtra��o -> resultado = 8
    cout<<++x/2.0<<endl; //operador pre fixado ent�o fica x = 3; faz a divis�o 3/2.0 = 1.5; como tem o 2.0 j� da a entender q o resultado ser� do tipo float ou double
    cout<<2*x++/--y<<endl; //operador pos fixado, entao x continua x=3, y fica y=-2 pois o operador � pre fixado; 2*3/-2; primeiro a multiplica��o -> 6/-2; divis�o -> resultado = -3
    return 0;
}
