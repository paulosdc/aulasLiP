#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ultimos = n%1000;
    int digito3 = (ultimos%100)%10;
    int digito2 = (ultimos%100)/10;
    int digito1 = ultimos/100;
    cout << digito1 << " " << digito2 << " " << digito3 << endl;
    return 0;
}
