#include <iostream>
#include <iomanip>

using namespace std;
int main (){
    cout << fixed << setprecision(2) << endl;
    float salario, vendas;
    cin >> salario >> vendas;
    float total = salario + 0.05*vendas;
    cout << total << endl;
    return 0;
}
