#include <iostream>
#include <cstring>

using namespace std;
const int MAX = 51;
void criaContrario(int& tamanho, char original[], char contrario[]){
    int i = tamanho-1, c = 0;
    while(original[c] != '\0'){
        contrario[i] = original[c];
        c++;
        i--;
    }
    contrario[tamanho] = '\0';
}
void palindromo(int& tamanho, char original[], char contrario[]){
    criaContrario(tamanho, original, contrario);
    int comparacao = strcmp(original, contrario);
    if(comparacao == 0){
        cout << original << " é um palíndromo";
    }else{
        cout << original << " não é um palíndromo";
    }
}
int main(){
    char original[MAX];
    cin.getline(original, MAX);
    int tamanho = strlen(original);
    char contrario[tamanho];
    palindromo(tamanho, original, contrario);
}
