#include <iostream>
using namespace std;
int main (){
    int segundos;
    cin >> segundos;
    int horas, minutos, seg;
    horas = segundos/3600;
    minutos = (segundos%3600)/60;
    seg = ((segundos%3600)%60);
    cout << horas << " hora(s), " << minutos << " minuto(s) e " << seg << " segundo(s)" << endl;
    return 0;
}
