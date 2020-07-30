#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int MAX = 200;
struct Aluno{
    char nome[MAX];
    double nota;
};
int main(){
    ofstream arquivo;
    int numeroAlunos;
    arquivo.open("texto.txt");
    if(!arquivo.is_open()){
        cout << "O arquivo não pôde ser criado!" << endl;
        exit(0);
    }
    arquivo >> numeroAlunos;
    arquivo << "Numero de alunos: " << numeroAlunos << endl;
    Aluno alunos[MAX];
    for(int i = 0;i<numeroAlunos;i++){
        arquivo.ignore();
        arquivo.getline(alunos[i].nome, MAX);
        arquivo >> alunos[i].nota;
    }
    return 0;
}
