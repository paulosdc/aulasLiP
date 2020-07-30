#include <iostream>
using namespace std;
void segundos(int s, int& horas, int& minutos, int& seg){
    horas = s/3600, minutos = (s%3600)/60, seg = (s%3600)%60;
}

void periodo(int s, int& horas, int& minutos, int& seg){
    segundos(s, horas, minutos, seg);
    if(horas>=0 && horas<6){
        cout << "Madrugada" << endl;
    }else if(horas>=6 && horas<12){
        cout << "Manhã" << endl;
    }else if(horas>=12 && horas<18){
        cout << "Tarde" << endl;
    }else if(horas>=18 && horas<24){
        cout << "Noite" << endl;
    }

}
int main(){
    int segundosTempo, horas, minutos, seg;
    cin >> segundosTempo;
    periodo(segundosTempo, horas, minutos, seg);
    return 0;
}
