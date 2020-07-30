#include <iostream>
using namespace std;
int main(){
    int dia;
    cin >> dia;
    switch(dia){
    case 1:
    case 8:
    case 15:
    case 22:
    case 29:
        cout << "Domingo" << endl;
        break;
    case 2:
    case 9:
    case 16:
    case 23:
    case 30:
        cout << "Segunda" << endl;
        break;
    case 3:
    case 10:
    case 17:
    case 24:
    case 31:
        cout << "Terça" << endl;
        break;
    case 4:
    case 11:
    case 18:
    case 25:
        cout << "Quarta" << endl;
        break;
    case 5:
    case 12:
    case 19:
    case 26:
        cout << "Quinta" << endl;
        break;
    case 6:
    case 13:
    case 20:
    case 27:
        cout << "Sexta" << endl;
        break;
    case 7:
    case 14:
    case 21:
    case 28:
        cout << "Sábado" << endl;
        break;
    default:
        cout << "Dia inválido" << endl;
        break;
    }
    return 0;
}
