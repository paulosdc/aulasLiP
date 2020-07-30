#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 200;
struct Produto{
    int codigo;
    char nome[MAX];
    double preco;
    int estoque;
};
struct Cliente{
    char nome[MAX];
    char endereco[MAX];
    char email[MAX];
    char cpf[MAX];
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
};
struct Loja{
    char nome[MAX];
    char endereco[MAX];
    char telefone[MAX];
    Produto produtos[50];
    Cliente clientes[1000];
};
void informacoesLoja(int numeroClientes, int numeroProdutos, Loja loja){
    cout << "Loja: " << loja.nome << endl;
    cout << "Endereço: " << loja.endereco << endl;
    cout << "Telefone: " << loja.telefone << endl;
}
void informacoesClientes(int indiceCliente, Loja loja){
    cout << "Cliente na posição " << indiceCliente << ":" << endl;
    cout << "Nome: " << loja.clientes[indiceCliente].nome << endl;
    cout << "Endereço: " << loja.clientes[indiceCliente].endereco << endl;
    cout << "Email: " << loja.clientes[indiceCliente].email << endl;
    cout << "CPF: " << loja.clientes[indiceCliente].cpf << endl;
    cout << "Data de nascimento: " << loja.clientes[indiceCliente].diaNascimento << "/" << loja.clientes[indiceCliente].mesNascimento << "/" << loja.clientes[indiceCliente].anoNascimento << endl;
}
void informacoesProdutos(int indiceProduto, Loja loja){
    cout << "Produto na posição: " << indiceProduto << endl;
    cout << "Código: " << loja.produtos[indiceProduto].codigo << endl;
    cout << "Nome: " << loja.produtos[indiceProduto].nome << endl;
    cout << "Preço: " << loja.produtos[indiceProduto].preco << endl;
    cout << "Estoque: " << loja.produtos[indiceProduto].estoque << endl;
}
void mesAniversario(int aniversario){
    switch(aniversario){
    case 1:
        cout << "janeiro:" << endl;
        break;
    case 2:
        cout << "fevereiro:" << endl;
        break;
    case 3:
        cout << "março:" << endl;
        break;
    case 4:
        cout << "abril:" << endl;
        break;
    case 5:
        cout << "maio:" << endl;
        break;
    case 6:
        cout << "junho:" << endl;
        break;
    case 7:
        cout << "julho:" << endl;
        break;
    case 8:
        cout << "agosto:" << endl;
        break;
    case 9:
        cout << "setembro:" << endl;
        break;
    case 10:
        cout << "outubro:" << endl;
        break;
    case 11:
        cout << "novembro:" << endl;
        break;
    case 12:
        cout << "dezembro:" << endl;
        break;
    default:
        break;
    }
}
void clientesAniversario(int aniversario, int numeroClientes, Loja loja){
    cout << "Aniversariantes de ";
    mesAniversario(aniversario);
    for(int i = 0;i<numeroClientes;i++){
        if(loja.clientes[i].mesNascimento == aniversario)  cout << loja.clientes[i].nome << endl;
    }
}
void estoqueBaixo(int numeroProdutos, Loja loja){
    cout << "Produtos com estoque inferior a 10:" << endl;
    for(int i = 0;i<numeroProdutos;i++){
        if(loja.produtos[i].estoque<10) cout << loja.produtos[i].nome << endl;
    }
}
int main(){
    int numeroClientes, numeroProdutos, aniversario, posicaoCliente, posicaoProduto;
    cin >> numeroClientes >> numeroProdutos;
    Loja loja;
    cin.ignore();
    cin.getline(loja.nome, MAX);
    cin.getline(loja.endereco, MAX);
    cin.getline(loja.telefone, MAX);
    for(int i = 0;i<numeroClientes;i++){
        cin.getline(loja.clientes[i].nome, MAX);
        cin.getline(loja.clientes[i].endereco, MAX);
        cin.getline(loja.clientes[i].email, MAX);
        cin.getline(loja.clientes[i].cpf, MAX);
        cin >> loja.clientes[i].diaNascimento;
        cin >> loja.clientes[i].mesNascimento;
        cin >> loja.clientes[i].anoNascimento;
        cin.ignore();
    }
    for(int i = 0;i<numeroProdutos;i++){
        cin >> loja.produtos[i].codigo;
        cin.ignore();
        cin.getline(loja.produtos[i].nome, MAX);
        cin >> loja.produtos[i].preco;
        cin >> loja.produtos[i].estoque;
    }
    cin >> aniversario >> posicaoCliente >> posicaoProduto;
    informacoesLoja(numeroClientes, numeroProdutos, loja);
    clientesAniversario(aniversario, numeroClientes, loja);
    estoqueBaixo(numeroProdutos, loja);
    informacoesClientes(posicaoCliente, loja);
    informacoesProdutos(posicaoProduto, loja);
}
