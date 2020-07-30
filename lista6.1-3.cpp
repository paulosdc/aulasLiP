#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
const int MAX = 100;
struct Produto {
    char nome[MAX];
    int codigo;
    double preco;
    int tipo;
};
void imprimeProduto(int n, Produto produtos[]){
   for(int i = 0;i<n;i++){
        cout << "{ código: " << produtos[i].codigo << " , ";
        cout << "nome: " << produtos[i].nome << " , ";
        cout << "preço: " << produtos[i].preco << " , ";
        cout << "tipo = ";
        if(produtos[i].tipo==0){
            cout << "Eletrodoméstico }" << endl;
        }else if(produtos[i].tipo==1){
            cout << "Moda }" << endl;
        }else{
            cout << "Outro }" << endl;
        }
    }
}
void maisCaro(int maior, int n, Produto produtos[]){
    int indiceCaro;
    for(int i = 0;i<n;i++){
        if(produtos[i].preco>maior){
            maior = produtos[i].preco;
            indiceCaro = i;
        }
    }
    cout << "Mais caro" << endl;
    cout << "{ código: " << produtos[indiceCaro].codigo << " , ";
    cout << "nome: " << produtos[indiceCaro].nome << " , ";
    cout << "preço: " << produtos[indiceCaro].preco << " , ";
    cout << "tipo = ";
    if(produtos[indiceCaro].tipo==0){
        cout << "Eletrodoméstico }" << endl;
    }else if(produtos[indiceCaro].tipo==1){
        cout << "Moda }" << endl;
    }else{
        cout << "Outro }" << endl;
    }
}

bool temIpad(int n, Produto produtos[]){
    string iPad = "iPad";
    int c = 0;
    for(int i = 0;i<n;i++){
        if(produtos[i].nome == iPad){
            c++;
        }
    }
    if(c>0) return true;
    else return false;
}
double lucroEletrodomesticos(int n, Produto produtos[]){
    double soma = 0;
    for(int i = 0;i<n;i++){
        if(produtos[i].tipo == 0){
            soma+=produtos[i].preco;
        }
    }
    return soma;
}
int main(){
    int n;
    cin >> n;
    Produto produtos[n];
    for(int i = 0;i<n;i++){
        cin.ignore();
        cin.getline(produtos[i].nome, MAX);
        cin >> produtos[i].codigo;
        cin >> produtos[i].preco;
        cin >> produtos[i].tipo;
    }
    int maior = INT_MIN;
    imprimeProduto(n, produtos);
    maisCaro(maior, n, produtos);
    if(temIpad(n, produtos)) cout << "Tem iPad" << endl;
    else cout << "Não tem iPad" << endl;
    cout << "Lucro: " << lucroEletrodomesticos(n, produtos);
    return 0;
}
