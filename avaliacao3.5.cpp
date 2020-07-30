#include <iostream>
using namespace std;
int main(){
    int n, m, diferenca;
    cin >> n >> m;
    for(int i = 1;i<=n;i++){
        diferenca = n - m*i;
        if(m*i == n){
            cout << "Quociente: " << i << endl;
            cout << "Resto: 0" << endl;
        }else if(n < m*(i+i) && diferenca>0 && diferenca<m){
            cout << "Quociente: " << i << endl;

            cout << "Resto: " << diferenca << endl;
        }
    }
    if(n<m){
        cout << "Quociente: 0" << endl;
            cout << "Resto: " << n << endl;
    }
    return 0;
}
