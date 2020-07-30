#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
const int MAX = 51;
void ehNumero(char str[]){
    int numeros = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(isdigit(str[i])){
            numeros++;
        }
        i++;
    }
    int tamanho = strlen(str);
    if(str[0]=='-' || str[0]=='+'){
        if(numeros == tamanho-1){
            cout << str << " representa um número" << endl;
        }else{
            cout << str << " não representa um número" << endl;
        }
    }else{
        if(numeros == tamanho){
            cout << str << " representa um número" << endl;
        }else{
            cout << str << " não representa um número" << endl;
        }
    }

}
int main(){
    char str[MAX];
    cin.getline(str, MAX);
    ehNumero(str);
    return 0;
}
