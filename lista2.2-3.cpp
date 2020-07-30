#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
const int MAX = 60;

int sequencia(char letra, char str[]){
    int i = 0, c = 0, maior = 0;
    int tamanho = strlen(str);
    while(str[i]!='\0'){
        if(str[i]==letra){
            c++;
            if(c>maior){
                maior = c;
            }
        }else{
            c = 0;
        }

        i++;
    }
    return maior;
}

int main(){
    char letra, str[MAX];
    cin.getline(str, MAX);
    cin >> letra;
    int maiorSequencia = sequencia(letra, str);
    cout << "String: " << str << endl;
    cout << "Char: " << letra << endl;
    cout << "Tamanho: " << maiorSequencia << endl;
    return 0;
}
