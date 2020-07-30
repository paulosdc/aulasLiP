#include <iostream>
#include <cstdlib>
using namespace std;

void pontos(int& s1, int& s2, int& s3, int& pontosA, int& pontosJ){
    for(int i = 1;i<=3;i++){ //para antonio
        int numero;
        cin >> numero;
        if(numero == s1 || numero == s2 || numero == s3){
            pontosA += 1;
        }
    }

    for(int i = 1;i<=3;i++){ //para joao
        int numero;
        cin >> numero;
        if(numero == s1 || numero == s2 || numero == s3){
            pontosJ += 1;
        }
    }

}
void sorteio(int& s1, int& s2, int& s3, int& semente){
    srand(semente);
    s1 = rand()%20 + 1;
    s2 = rand()%20 + 1;
    s3 = rand()%20 + 1;
}

int main(){
    int semente;
    cin >> semente;
    int s1 = 0, s2 = 0, s3 = 0, pontosA = 0, pontosJ = 0;
    sorteio(s1, s2, s3, semente);
    pontos(s1, s2, s3, pontosA, pontosJ);
    cout << "sorteio: " << s1  << " " << s2 << " " << s3 << endl;
    if(pontosA>pontosJ){
        cout << "Antonio marcou mais pontos";
    }else if(pontosA==pontosJ){
        cout << "Empate";
    }else{
        cout << "João marcou mais pontos";
    }
    return 0;
}
