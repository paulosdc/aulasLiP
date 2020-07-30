#include <iostream>
using namespace std;
int potencia(int x, int y){
    if(y>0){
        return x * potencia(x, --y);
    }else{
        return 1;
    }

}
int main(){
    int x, y;
    cin >> x >> y;
    int res = potencia(x, y);
    cout << "pow( " << x << " , " << y << " ) = " << res << endl;
    return 0;
}

