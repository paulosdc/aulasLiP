#include <iostream>
using namespace std;
int main(){
    float x;
    cin >> x;
    int inteira = x;
    int decimal = (x - inteira)*1000;
    cout << "Parte inteira: " << inteira << endl;
    cout << "Parte decimal: " << decimal << endl;
    return 0;
}
