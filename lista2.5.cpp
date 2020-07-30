#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int id_Trabalhador, horas;
    float salarioPhora;
    cin >> id_Trabalhador >> horas >> salarioPhora;
    cout << fixed << setprecision(2);
    float salario = salarioPhora * horas;
    cout << "ID: " << id_Trabalhador << endl;
    cout << "Salario: " << salario << endl;
    return 0;
}
