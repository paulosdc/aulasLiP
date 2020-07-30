#include <iostream>
using namespace std;
int main(){
    int valor;
    cin >> valor;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    nota100 = valor/100;
    nota50 = (valor%100)/50;
    nota20 = ((valor%100)%50)/20;
    nota10 = (((valor%100)%50)%20)/10;
    nota5 = ((((valor%100)%50)%20)%10)/5;
    nota2 = (((((valor%100)%50)%20)%10)%5)/2;
    nota1 = (((((valor%100)%50)%20)%10)%5)%2;

    cout << nota100 << " nota(s)de 100" << endl;
    cout << nota50 << " nota(s)de 50" << endl;
    cout << nota20 << " nota(s)de 20" << endl;
    cout << nota10 << " nota(s)de 10" << endl;
    cout << nota5 << " nota(s)de 5" << endl;
    cout << nota2 << " nota(s)de 2" << endl;
    cout << nota1 << " moeda)de 1" << endl;

}
