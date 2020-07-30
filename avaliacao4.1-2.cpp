#include <iostream>
using namespace std;
const int MAX = 30;
void lerVetor(int n, int j, int vendas[MAX][MAX]);
void escreverVetor(int n, int j, int vendas[MAX][MAX]);
bool comparaX(int x, int n, int j, int vendas[][MAX]);
bool valoresIguais(int n, int j, int vendas[][MAX]);
int somaVendas(int n, int j, int vendas[][MAX]);
bool maisCaro(int n, int y, int j, int vendas[][MAX]);
//FUNCAO PRINCIPAL
void relatorio(int vendas[][MAX]){ //CHAMA TODAS AS OUTRAS FUNCOES PARA FAZER O RELATORIO
    int tamanho1, tamanho2;
    for(int c = 0;c<=1;c++){
        if(c==0){
            cin >> tamanho1;
            lerVetor(tamanho1, c, vendas);
            escreverVetor(tamanho1, c, vendas);
        }else{
            cin >> tamanho2;
            lerVetor(tamanho2, c, vendas);
            escreverVetor(tamanho2, c, vendas);
        }
    }
    int x1, x2;
    cin >> x1 >> x2;
    for(int c = 0;c<=1;c++){
        if(c==0){
            bool comparacao1 = comparaX(x1, tamanho1, c, vendas);
            if(comparacao1){
                cout << "Sim, funcionário 1 vendeu um produto cujo valor foi " << x1 << endl;
            }else{
                cout << "Não, funcionário 1 não vendeu um produto cujo valor foi " << x1 << endl;
            }
        }else{
            bool comparacao2 = comparaX(x2, tamanho2, c, vendas);
            if(comparacao2){
                cout << "Sim, funcionário 2 vendeu um produto cujo valor foi " << x2 << endl;
            }else{
                cout << "Não, funcionário 2 não vendeu um produto cujo valor foi " << x2 << endl;
            }
        }
    }

     for(int c = 0;c<=1;c++){
        if(c==0){
            bool iguais1 = valoresIguais(tamanho1, c, vendas);
            if(iguais1){
                cout << "Sim, funcionário 1 vendeu dois produtos com o mesmo valor" << endl;
            }else{
                cout << "Não, funcionário 1 não vendeu dois produtos com o mesmo valor" << endl;
            }
        }else{
            bool iguais2 = valoresIguais(tamanho2, c, vendas);
            if(iguais2){
                cout << "Sim, funcionário 2 vendeu dois produtos com o mesmo valor" << endl;
            }else{
                cout << "Não, funcionário 2 não vendeu dois produtos com o mesmo valor" << endl;
            }
        }
    }
    int soma1, soma2;
    for(int c = 0;c<=1;c++){
        if(c==0){
            soma1 = somaVendas(tamanho1, c, vendas);
        }else{
            soma2 = somaVendas(tamanho2, c, vendas);
        }
    }
    if(soma1>soma2){
        cout << "O melhor vendedor foi 1" << endl;
    }else if(soma1<soma2){
        cout << "O melhor vendedor foi 2" << endl;
    }else{
        cout << "Empate" << endl;
    }
    bool caro1 = maisCaro(tamanho1, tamanho2, 0, vendas);
    if(caro1){
        cout << "Sim, todos os produtos vendidos por 1 foram mais caros que os produtos vendidos por 2" << endl;
    }else{
        cout << "Não, os produtos vendidos por 1 não foram todos mais caros que os produtos vendidos por 2" << endl;
    }
    bool caro2 = maisCaro(tamanho1, tamanho2, 1, vendas);
    if(caro2){
        cout << "Sim, todos os produtos vendidos por 2 foram mais caros que os produtos vendidos por 1" << endl;
    }else{
        cout << "Não, os produtos vendidos por 2 não foram todos mais caros que os produtos vendidos por 1" << endl;
    }

}
//FUNCOES SECUNDARIAS
void lerVetor(int n, int j, int vendas[][MAX]){ //RECEBE OS VALORES DA MATRIZ (como se fossem 2 vetores)
    for(int i = 0;i<n;i++){
        cin >> vendas[i][j];
    }
}
void escreverVetor(int n, int j, int vendas[][MAX]){ //ESCREVE OS VALORES DA MATRIZ (como se fossem 2 vetores)
    cout << "Vendas " << j+1 << "." << endl;
    cout << "[ ";
    for(int i = 0;i<n;i++){
        if(i<n-1){
            cout << vendas[i][j] << " , ";
        }else{
            cout << vendas[i][j] << " ";
        }
    }
    cout << "]" << endl;
}
bool comparaX(int x, int n, int j, int vendas[][MAX]){ //VE SE ALGUM VALOR É IGUAL AO PARAMETRO X DIGITADO
    bool igual = false;
    for(int i = 0;i<n;i++){
        if(vendas[i][j] == x){
            igual = true;
        }
    }
    return igual;
}
bool valoresIguais(int n, int j, int vendas[][MAX]){ //VE SE TEM VENDAS COM O MESMO VALOR
    bool iguais = false;
    int c = 0, valoresIguais = 0;
    while(c<n){
        for(int i = 0;i<n;i++){
            if(vendas[c][j] == vendas[i][j]){
                valoresIguais++;
            }
            if(valoresIguais>=2){
                    iguais = true;
                    break;
            }
        }
        valoresIguais = 0;
        c++;
    }
    return iguais;
}
int somaVendas(int n, int j, int vendas[][MAX]){ //SOMA AS VENDAS DE CADA VENDEDOR PRA VER QUEM FOI MELHOR
    int soma = 0;
    for(int i = 0;i<n;i++){
        soma += vendas[i][j];
    }
    return soma;
}
bool maisCaro(int n, int y, int j, int vendas[][MAX]){ //VE SE TODAS AS VENDAS DE UM VENDEDOR FORAM MAIS CARAS QUE A DO OUTRO
    bool ehCaro = false;
    int caros = 0, k, aux;
    if(j == 0){
        k = 1;
    }else{
        k = 0;
        aux = y; //TROCA OS TAMANHOS DAS LINHAS DE LUGAR DEPENDENDO DO VALOR DA COLUNA
        y = n;
        n = aux;
    }
    for(int i = 0;i<n;i++){
        for(int c = 0;c<y;c++){
            if(vendas[i][j]>vendas[c][k]){
                caros++;
            }
        }
    }
    if(caros == n*y){
        ehCaro = true;
    }
    return ehCaro;
}
int main(){
    int vendas[MAX][MAX];
    relatorio(vendas);
    return 0;
}
