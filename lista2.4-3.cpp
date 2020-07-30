#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
const int MAX = 150;
void tiraEspaco(char frase[], char semEspaco[], char invertida[]);
void inverte(char semEspaco[], char invertida[]);
bool compara(char semEspaco[], char invertida[]);
void tudoMinusculo(char frase[]);

void palindromo(char frase[], char semEspaco[], char invertida[]){
    cout << '\"' << frase << '\"';
    tudoMinusculo(frase);
    tiraEspaco(frase, semEspaco, invertida);
    inverte(semEspaco, invertida);
    bool ehPalindromo = compara(semEspaco, invertida);
    if(ehPalindromo)  cout << " é um palíndromo" << endl;
    else cout << " não é um palíndromo" << endl;
}

void tudoMinusculo(char frase[]){
    int i = 0;
    while(frase[i]!='\0'){
        frase[i] = tolower(frase[i]);
        i++;
    }
}
void tiraEspaco(char frase[], char semEspaco[], char invertida[]){
    int i = 0, tamanho = strlen(frase), c = 0;
    while(frase[i]!='\0'){
        if(frase[i]!=' ' && !ispunct(frase[i])){
            semEspaco[c] = frase[i];
            c++;
        }
        i++;
    }
    semEspaco[c] = '\0';
}
void inverte(char semEspaco[], char invertida[]){
    int i = 0, tamanho = strlen(semEspaco) - 1;
    while(semEspaco[i]!='\0'){
        invertida[tamanho] = semEspaco[i];
        i++;
        tamanho--;
    }
    invertida[tamanho] = '\0';
}
bool compara(char semEspaco[], char invertida[]){
    int i = 0, contaIguais = 0;
    bool iguais = false;
    while(semEspaco[i]!='\0'){
        if(semEspaco[i]==invertida[i]) contaIguais++;
        i++;
    }
    if(contaIguais==i){
        iguais = true;
    }
    return iguais;
}
int main(){
    char frase[MAX], semEspaco[MAX], invertida[MAX];
    cin.getline(frase, MAX);
    palindromo(frase, semEspaco, invertida);
    return 0;
}
