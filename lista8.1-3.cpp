#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;
const int MAX = 200;
struct Pessoa{
    char cpf[MAX];
    char nome[MAX];
    char sobrenome[MAX];
    char endereco[MAX];
    char telefone[MAX];
};
void escreveArquivo(Pessoa pessoas[], ofstream &arquivo, int n){
    for(int i = 0;i<n;i++){
        arquivo << pessoas[i].cpf << ";" << pessoas[i].nome << ";" << pessoas[i].sobrenome << ";" << pessoas[i].endereco << ";" << pessoas[i].telefone << endl;
    }
}
void leituraArquivo(Pessoa pessoas[], ifstream &leArquivo, int n){
    char pessoasLidas[MAX];
    while(!leArquivo.eof()){
         leArquivo.getline(pessoasLidas, MAX);
         cout << pessoasLidas << endl;
    }
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    Pessoa pessoas[n];
    for(int i = 0;i<n;i++){
        cin.getline(pessoas[i].cpf, MAX);
        cin.getline(pessoas[i].nome, MAX);
        cin.getline(pessoas[i].sobrenome, MAX);
        cin.getline(pessoas[i].endereco, MAX);
        cin.getline(pessoas[i].telefone, MAX);
    }
    remove("questao.csv");
    ofstream arquivo;
    arquivo.open("questao.csv");
    ifstream leArquivo;
    leArquivo.open("questao.csv");
    if(!arquivo.is_open()){
        cout << "O arquivo não pôde ser criado/aberto!" << endl;
        exit(0);
    }
    if(!leArquivo.is_open()){
        cout << "O arquivo não pôde ser criado/aberto!" << endl;
        exit(0);
    }
    escreveArquivo(pessoas, arquivo, n);
    leituraArquivo(pessoas, leArquivo, n);
    arquivo.close();
    leArquivo.close();
    return 0;
}
