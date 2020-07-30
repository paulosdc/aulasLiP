#include <iostream>
using namespace std;
int main(){
    float canto_EsquerdoX, canto_EsquerdoY, largura_Retangulo, altura_Retangulo;
    float xP, yP;
    cin >> canto_EsquerdoX >> canto_EsquerdoY >> largura_Retangulo >> altura_Retangulo >> xP >> yP;
    if(canto_EsquerdoX>0 && canto_EsquerdoY>0){
        if((canto_EsquerdoX<=xP && xP<=canto_EsquerdoX+largura_Retangulo) && (canto_EsquerdoY<=yP && yP<=canto_EsquerdoY+altura_Retangulo)){
            cout << "Dentro" << endl;
        }else{
            cout << "Fora" << endl;
        }
    }else{
        if((canto_EsquerdoX<=xP<=canto_EsquerdoX+largura_Retangulo) && (canto_EsquerdoY<=yP<=canto_EsquerdoY+altura_Retangulo)){
            cout << "Fora" << endl;
        }else{
            cout << "Dentro" << endl;
        }

    }
    return 0;
}
