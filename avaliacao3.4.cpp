#include <iostream>
using namespace std;
int main(){
    int n, divisores = 0, maiorPrimo;
    cin >> n;
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            for(int c = 1;c<=i;c++){
                if(i%c==0){
                    divisores++;
                }
            }
            if(divisores == 2){
                maiorPrimo = i;
            }
            divisores = 0;
        }
    }
    cout << maiorPrimo;
    return 0;
}
