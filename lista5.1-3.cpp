#include <iostream>
using namespace std;
int multiplicacao(int x, int y){
    if(y>0){
        return x + multiplicacao(x, --y);
    }else{
        return 0;
    }

}
int main(){
    int x, y;
    cin >> x >> y;
    int res = multiplicacao(x, y);
    cout << x << " * " << y << " = " << res << endl;
    return 0;
}
