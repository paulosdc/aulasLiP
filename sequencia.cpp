#include <iostream>
using namespace std;
int formula(int n){
    if(n==1){
        return 3;
    }else if(n>1){
        return 3*n*n + formula(n-1);
    }
}
int main(){
    int n;
    cin >> n;
    formula(n);
    int resultado = formula(n);
    cout << resultado;
    return 0;
}
