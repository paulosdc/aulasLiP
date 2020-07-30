#include <iostream>
#include <cctype>
using namespace std;
int main(){
    int n, i = 0;
    char valor;
    cin >> n;
    while(n>0){
        cin >> valor;
        if(islower(valor)){
            i++;
        }
        n--;
    }
    cout << i;
    return 0;
}
