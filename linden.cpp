#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 250;

struct Produto {
    int codigo;
    char nome[MAX];
    double preco;
    int estoque;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Cliente {
    char nome[MAX];
    char endereco[MAX];
    char email[MAX];
    char cpf[MAX];
    Data dataNasc;
};

struct Loja {
    char nome[MAX];
    char endereco[MAX];
    char telefone[MAX];
    Cliente clientes[1000];
    Produto produtos[50];
};

int main() {
    int c, p, mes, iC, iP;
    Loja l;
    cin >> c >> p;
    cin.ignore();
    cin.getline(l.nome, MAX);
    cin.getline(l.endereco, MAX);
    cin.getline(l.telefone, MAX);
    for (int i = 0; i < c; i++) {
        cin.getline(l.clientes[i].nome, MAX);
        cin.getline(l.clientes[i].endereco, MAX);
        cin.getline(l.clientes[i].email, MAX);
        cin.getline(l.clientes[i].cpf, MAX);
        cin >> l.clientes[i].dataNasc.dia;
        cin >> l.clientes[i].dataNasc.mes;
        cin >> l.clientes[i].dataNasc.ano;
        cin.ignore();
    }
    for (int i = 0; i < p; i++) {
        cin >> l.produtos[i].codigo;
        cin.ignore();
        cin.getline(l.produtos[i].nome, MAX);
        cin >> l.produtos[i].preco;
        cin >> l.produtos[i].estoque;
    }
    cin >> mes >> iC, iP;
    return 0;
}
