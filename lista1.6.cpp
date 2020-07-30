#include <iostream>
#include <iomanip> //o manipulador é declarado aqui
using namespace std;
int main(){ // Imprimir até 20 decimais
    cout << fixed << setprecision(20); //o fixed usa uma notação de ponto flutuante fixa; o setprecision define o numero de casas decimais e por causa do fixed, adiciona 0 quando não tem mais casas decimais
    cout<<0.1 + 0.2<<endl;
    return 0;
}
