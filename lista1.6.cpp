#include <iostream>
#include <iomanip> //o manipulador � declarado aqui
using namespace std;
int main(){ // Imprimir at� 20 decimais
    cout << fixed << setprecision(20); //o fixed usa uma nota��o de ponto flutuante fixa; o setprecision define o numero de casas decimais e por causa do fixed, adiciona 0 quando n�o tem mais casas decimais
    cout<<0.1 + 0.2<<endl;
    return 0;
}
