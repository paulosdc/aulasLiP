#include <iostream>
using namespace std;
void conjectura(int n, int& passos){
    if(n>1){
        cout << n << endl;
        if(n%2==0){
            conjectura(n/2, passos);
        }
        else{
            conjectura((n*3)+1, passos);
        }
        passos++;
    }else{
        cout << n << endl;
    }
}
int main(){
    int n, passos = 0;
    cin >> n;
    conjectura(n, passos);
    cout << "Números de passos: " << passos << endl;
    return 0;
}
