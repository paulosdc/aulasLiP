#include <iostream>
#include <iomanip>
using namespace std;
void notasCrescente(double& nota1, double& nota2, double& nota3, double& menor, double& maior, double& meio){
    if(nota1>=nota2 && nota1>=nota3){
        maior = nota1;
        if(nota2>=nota3){
            meio = nota2;
            menor = nota3;
        }else{
            meio = nota3;
            menor = nota2;
        }
    }else if(nota2>=nota1 && nota2>=nota3){
        maior = nota2;
        if(nota1>=nota3){
            meio = nota1;
            menor = nota3;
        }else{
            meio = nota3;
            menor = nota1;
        }
    }else if(nota3>=nota1 && nota3>=nota2){
        maior = nota3;
        if(nota1>=nota2){
            meio = nota1;
            menor = nota2;
        }else{
            meio = nota2;
            menor = nota1;
        }
    }
}
double nota(double& nota1, double& nota2, double& nota3, double& menor, double& maior, double& meio){
    notasCrescente(nota1, nota2, nota3, menor, maior, meio);
    double notaPassar = menor;
    double media = (menor+maior+meio)/3;
    while(media<5){
        notaPassar += 0.1;
        media = (notaPassar+maior+meio)/3;
    }
    if(notaPassar>=5.0){
        notaPassar -= 0.1;
    }

    return notaPassar;
}
int main(){
    cout << fixed << setprecision(2);
    double nota1, nota2, nota3, maior, menor, meio;;
    cin >> nota1 >> nota2 >> nota3;
    double notaNecessaria = nota(nota1, nota2, nota3, menor, maior, meio);
    cout << notaNecessaria;
    return 0;
}
