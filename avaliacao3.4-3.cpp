#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 200;
bool palindromo(int invertido, int tamanho, char str[MAX]){
    if(tamanho>=0){
        if(str[tamanho] == str[invertido]) palindromo(++invertido, --tamanho, str);
        else return false;
    }else return true;
}
int main(){
    char str[MAX];
    cin.getline(str, MAX);
    int tamanho = strlen(str) - 1;
    int invertido = 0;
    bool resultado = palindromo(invertido, tamanho, str);
    if(resultado) cout << str << " é palíndromo" << endl;
    else cout << str << " não é palíndromo" << endl;
    return 0;
}
