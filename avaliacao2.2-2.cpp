#include <iostream>
using namespace std;
int divisao(int x, int y, int& r, int& q){
    q = x/y;
    r = x%y;
}
int main(){
    int dividendo, divisor, r, q;
    cin >> dividendo >> divisor;
    divisao(dividendo, divisor, r, q);
    cout << "Q = " << q << endl;
    cout << "R = " << r << endl;
    return 0;
}
