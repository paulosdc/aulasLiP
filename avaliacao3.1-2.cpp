#include <iostream>
#include <cmath>
using namespace std;
bool primo(int n){ //descobre se é primo
    int c = 0;
    bool ehPrimo = false;
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        ehPrimo = true;
    }
    return ehPrimo;
}
int posicaoPrimo(int n){ //diz a posicao do numero primo
    int primos = 0;
    for(int x = 1; x<=n;x++){
        bool ehPrimo = primo(x);
        if(ehPrimo){
            primos++;
        }
    }
    return primos;
}
void contarDigitos(int n, int& digitos){ //digitos do numero para inverter
    digitos = 0;
    while(n>0){
        n /= 10;
        digitos++;
    }
}
void inverter(int n, int& digitos, int& numeroNovo){ //inverte
    numeroNovo = 0;
    contarDigitos(n, digitos);
    digitos = digitos-1;
    while(n>0){
        numeroNovo += (n%10)*pow(10, digitos);
        digitos--;
        n/=10;
    }
}
void invertidoPrimo(int n, int& digitos, int& numeroNovo){ // ve se o numero invertido é primo
    contarDigitos(n, digitos);
    inverter(n, digitos, numeroNovo);
    bool ehPrimo = primo(numeroNovo);
    if(ehPrimo){
        cout << "Número invertido é primo" << endl;
    }else{
        cout << "Número invertido não é primo" << endl;
    }
}
bool comparaPosicao(int n, int& digitos, int& numeroNovo){
    int posicao = posicaoPrimo(n);
    bool posicaoIgual = false;
    int posicaoInvertido = posicaoPrimo(numeroNovo);
    int aux = numeroNovo;
    inverter(posicaoInvertido, digitos, numeroNovo);
    if(posicao == numeroNovo){
        cout << "Posições coincidem" << endl;
        posicaoIgual = true;
    }else{
        cout << "As posições não coincidem" << endl;
    }
    numeroNovo = aux;
    return posicaoIgual;
}
int produtoDigitos(int n){ //faz o produto dos digitos do numero
    int produto = 1;
    while(n>0){
        produto *= n%10;
        n/=10;
    }
    return produto;
}
bool binario(int n){
    int numero = n;
    bool ehPalindromo = false;
    int tamanho = 0;
    while(n>0){
       n/=2;
       tamanho++;
    }
    int binario[tamanho];
    int palindromo[tamanho];
    for(int i = 0; i<tamanho;i++){
        binario[i] = numero%2;
        numero /= 2;
    }
    cout << "Binário: ";
    int c = tamanho-1;
    for(int i = tamanho-1; i>=0; i--){
        cout << binario[i];
        palindromo[c] = binario[i]; //esse vetor recebe o binario ao contrario
        c--;
    }
    cout << endl;
    c = tamanho-1;
    int verificaIguais = 0;
    for(int i = 0; i<tamanho;i++){
        if(binario[i] == palindromo[c]){
            verificaIguais++;
        }
        c--;
    }
    if(verificaIguais == tamanho){
        cout << "É palíndromo" << endl;
        ehPalindromo = true;
    }else{
        cout << "Não é palíndromo" << endl;
    }
    return ehPalindromo;
}
void sheldon(int n, int& digitos, int& numeroNovo){
    bool ehPrimo = primo(n);
    bool verificacaoPrimo = false, verificacaoPrimoInvertido = false, posicaoIgual = false;
    if(ehPrimo){
        cout << "É primo" << endl;
        verificacaoPrimo = true;
    }else{
        cout << "Não é primo" << endl;
    }
    int posicao = posicaoPrimo(n);
    cout << "Posição: " << posicao << endl;
    int posicaoComparar = posicao; // para n perder e poder usar para comparar com o produto dos digitos
    contarDigitos(n, digitos);
    inverter(n, digitos, numeroNovo);
    cout << "Número invertido: " << numeroNovo << endl;
    ehPrimo = primo(numeroNovo);
    if(ehPrimo){
        cout << "Número invertido é primo" << endl;
        verificacaoPrimoInvertido = true;
    }else{
        cout << "Número invertido não é primo" << endl;
    }
    posicao = posicaoPrimo(numeroNovo);
    cout << "Posição número invertido: " << posicao << endl;
    posicaoIgual = comparaPosicao(n, digitos, numeroNovo);
    int produto = produtoDigitos(n);
    cout << "Produto dos dígitos: " << produto << endl;
    if(produto == posicaoComparar){
        cout << "Produto e posição coincidem" << endl;
    }else{
        cout << "Produto e posição não coincidem" << endl;
    }
    bool verificacaoPalindromo = binario(n);
    if(verificacaoPalindromo && posicaoIgual && verificacaoPrimo && verificacaoPrimoInvertido){
        cout << "É Sheldon" << endl;
    }else{
        cout << "Não é Sheldon" << endl;
    }
}
int main(){
    int numero, digitos, numeroNovo;
    cin >> numero;
    sheldon(numero, digitos, numeroNovo);
    return 0;
}
