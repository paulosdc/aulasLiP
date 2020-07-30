#include <iostream>
using namespace std;
int MDC(int x, int y){
    if(y==0){
        return x;
    }else{
        return MDC(y, x%y);
    }
}
int main(){
    int x, y;
    cin >> x >> y;
    int resultado = MDC(x, y);
    cout << "MDC(" << x << " , " << y << ") = " << resultado;
    return 0;
}
