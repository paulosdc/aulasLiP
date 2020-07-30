//12 km/l
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float tempo, velocidade;
    cout << fixed << setprecision(2);
    cin >> tempo >> velocidade;
    float distancia = tempo*velocidade;
    float gasolina = distancia/12;
    cout << gasolina << endl;
    return 0;
}
