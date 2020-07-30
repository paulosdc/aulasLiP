#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 60;
void moveEsquerda(int posicao, char letra, char str[]);
void removeLetras(char letra, char str[]){
    int tamanho = strlen(str), i = 0, c = 1;
    cout << str << " => " << endl;
    while(str[i]!='\0'){
        if(str[i]==letra){
                moveEsquerda(i, letra, str);
                tamanho--;
        }
        i++;
    }
    str[tamanho] = '\0';
    cout << str;
}
void moveEsquerda(int posicao, char letra, char str[]){
    while(str[posicao]!='\0'){
        str[posicao] = str[posicao+1];
        posicao++;
    }
}
int main(){
    char letra, str[MAX];
    cin.getline(str, MAX);
    cin >> letra;
    removeLetras(letra, str);
    return 0;
}
