#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double distancia (double p1x, double p1y, double p2x, double p2y){
    double dist = sqrt(pow((p2x - p1x), 2) + pow((p2y - p1y), 2));
    return dist;
}
bool circulo(double raio, double xP1, double yP1, double xP2, double yP2){
    double d = distancia(xP1, yP1, xP2, yP2);
    bool dentro = false;
    if(d < raio){
        dentro = true;
    }
    return dentro;
}




int main(){
    cout << fixed << setprecision(2);
    double r, x1, y1, x2, y2;
    cin >> r  >> x1 >> y1 >> x2 >> y2;
    bool res = circulo(r, x1, y1, x2,y2);
    if(res){
        cout << "O ponto está dentro" << endl;
    }else{
        cout << "O ponto está fora" << endl;
    }
    return 0;
}
