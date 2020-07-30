#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const int MAX = 2;
void transladar(double& x, double& y){
    double dX, dY;
    cin >> dX >> dY;
    x+=dX;
    y+=dY;
    cout << "( " << x << " , " << y << " )";
}
void rotacao(double& x, double& y){
    double angulo;
    cin >> angulo;
    angulo = (M_PI*angulo)/180.0;
    double coseno = cos(angulo), seno = sin(angulo);
    double matrizRotacao[MAX][MAX] = {{coseno, -seno}, {seno, coseno}};
    double origemX = x, origemY = y;
    double somaX = 0, somaY = 0;
    for(int i = 0;i<2;i++){
        for(int c = 0;c<2;c++){
            if(i==0 && c==0){
                somaX+=origemX*matrizRotacao[i][c];
            }else if(i==1 && c==0){
                somaX+=origemY*matrizRotacao[i][c];
            }else if(i==0 && c==1){
                somaY+= origemX*matrizRotacao[i][c];
            }else{
                somaY+= origemY*matrizRotacao[i][c];
            }
        }
    }
    x = somaX;
    y = somaY;
    cout << "( " << x << " , " << y << " )";
}
int main(){
    double x, y;
    cin >> x >> y;
    cout << fixed << setprecision(2);
    char transformacao;
    cin >> transformacao;
    cout << "( " << x << " , " << y << " )";
    while(transformacao=='t' || transformacao=='r'){
        cout << " -> ";
        if(transformacao=='t'){
            transladar(x, y);
        }
        if(transformacao=='r'){
            rotacao(x, y);
        }
        cin >> transformacao;
    }
    return 0;
}
