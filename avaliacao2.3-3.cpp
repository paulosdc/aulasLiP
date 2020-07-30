#include <iostream>
#include <cstring>
const int MAX = 200;
using namespace std;
void separaVogais(char str[MAX], char str2[MAX], char str3[MAX]){
    int i = 0, c = 0, x = 0;
    while(str[i]!='\0'){
        int posicao = str[i];
        if(posicao==97 || posicao==101 || posicao==105 || posicao==111 || posicao==117){
            str2[c] = str[i];
            c++;
        }else{
            str3[x] = str[i];
            x++;
        }
        i++;
    }
    str2[c] = '\0';
    str3[x] = '\0';
}
void ordenaVogais(char str2[MAX]){
    int tamanho = strlen(str2);
    int i = tamanho-1;
    while(str2[i]!='\0'){
        for(int j = 0;j<i;j++){
            int posicao1 = str2[j], posicao2 = str2[j+1];
            if(posicao1>posicao2){
                char aux = str2[j+1];
                str2[j+1] = str2[j];
                str2[j] = aux;
            }
        }
        i--;
    }
}
void ordenaConsoantes(char str3[MAX]){
    int tamanho = strlen(str3);
    int i = tamanho-1;
    while(str3[i]!='\0'){
        for(int j = 0;j<i;j++){
            int posicao1 = str3[j], posicao2 = str3[j+1];
            if(posicao1>posicao2){
                char aux = str3[j+1];
                str3[j+1] = str3[j];
                str3[j] = aux;
            }
        }
        i--;
    }
}
void concatena(char str2[MAX], char str3[MAX], char strOrdenada[MAX]){
    int i = 0, c = 0;
    while(str2[i]!='\0'){
        strOrdenada[c] = str2[i];
        c++;
        i++;
    }
    i = 0;
    while(str3[i]!='\0'){
        strOrdenada[c] = str3[i];
        i++;
        c++;
    }
    strOrdenada[c] = '\0';
}
int main(){
    char str[MAX], vogais[MAX], consoantes[MAX], strOrdenada[MAX];
    cin.getline(str, MAX);
    separaVogais(str, vogais, consoantes);
    ordenaVogais(vogais);
    ordenaConsoantes(consoantes);
    concatena(vogais, consoantes, strOrdenada);
    cout << str << endl;
    cout << strOrdenada << endl;
}
