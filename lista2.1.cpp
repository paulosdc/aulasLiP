#include <iostream>
using namespace std;
int main (){
    bool a, b;
    cin >> a >> b;
    bool resultado = !(((!a)||b)&&a)||b;
    cout << resultado;

}
