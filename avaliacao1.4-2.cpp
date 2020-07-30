#include <iostream>
#include <iomanip>
using namespace std;
int segundos(int tempo){
    int horas = tempo/3600;
    int minutos = (tempo%3600)/60;
    int seg = (tempo%3600)%60;

    if(horas<10){
        cout << setfill('0') << setw(2) << horas;
    }else{
        cout << horas;
    }
    cout << ":";

    if(minutos<10){
        cout << setfill('0') << setw(2) << minutos;
    }else{
        cout << minutos;
    }
    cout << ":";

    if(seg<10){
        cout << setfill('0') << setw(2) << seg;
    }else{
        cout << seg;
    }


}

int main(){
    int totalSegundos;
    cin >> totalSegundos;
    segundos(totalSegundos);
}
