#include <iostream>
#include <cmath>
using namespace std;
struct Complexo{
    int inteiro;
    int imaginario;
};
void imprimeComplexos(int n, Complexo complexos[]){
    for(int i = 0;i<n;i++){
        if(complexos[i].imaginario>0) cout << complexos[i].inteiro << " + " << complexos[i].imaginario << "i" << endl;
        else if(complexos[i].imaginario<0) cout << complexos[i].inteiro << " - " << -complexos[i].imaginario << "i" << endl;
        else cout << complexos[i].inteiro << endl;
    }
}
void conjugado(int posicao, Complexo complexos[]){
    cout << "conjugado = ";
    if(-complexos[posicao-1].imaginario>0) cout << complexos[posicao-1].inteiro << " + " << -complexos[posicao-1].imaginario << "i" << endl;
    else if(-complexos[posicao-1].imaginario<0) cout << complexos[posicao-1].inteiro << " - " << complexos[posicao-1].imaginario << "i" << endl;
}
void modulo(int posicao, Complexo complexos[]){
    cout << "módulo = ";
    float moduloComplexo;
    moduloComplexo = sqrt(pow(complexos[posicao-1].inteiro, 2)+pow(complexos[posicao-1].imaginario, 2));
    cout << moduloComplexo << endl;
}
void compara(int posicao, Complexo complexos[]){
    if(complexos[posicao-1].inteiro == complexos[posicao].inteiro && complexos[posicao-1].imaginario == complexos[posicao].imaginario){
        if(complexos[posicao-1].imaginario > 0) cout << complexos[posicao-1].inteiro << " + " << complexos[posicao-1].imaginario << "i" << " é igual a ";
        else cout << complexos[posicao-1].inteiro << " - " << -complexos[posicao-1].imaginario << "i" << " é igual a ";

        if(complexos[posicao].imaginario > 0) cout << complexos[posicao].inteiro << " + " << complexos[posicao].imaginario << "i" << endl;
        else cout << complexos[posicao].inteiro << " - " << -complexos[posicao].imaginario << "i" << endl;
    }else{
        if(complexos[posicao-1].imaginario > 0) cout << complexos[posicao-1].inteiro << " + " << complexos[posicao-1].imaginario << "i" << " não é igual a ";
        else cout << complexos[posicao-1].inteiro << " - " << -complexos[posicao-1].imaginario << "i" << " não é igual a ";

        if(complexos[posicao].imaginario > 0) cout << complexos[posicao].inteiro << " + " << complexos[posicao].imaginario << "i" << endl;
        else cout << complexos[posicao].inteiro << " - " << -complexos[posicao].imaginario << "i" << endl;

    }
}
void somaComplexo(int n, Complexo complexos[]){
    int somaInteiro = 0, somaImaginario = 0;
    for(int i = 0;i<n;i++){
        somaInteiro += complexos[i].inteiro;
        somaImaginario += complexos[i].imaginario;
    }
    if(somaImaginario>=0) cout << "a soma dos complexos é " << somaInteiro << " + " << somaImaginario << "i" << endl;
    else cout << "a soma dos complexos é " << somaInteiro << " - " << -somaImaginario << "i" << endl;
}
int main(){
    int n;
    cin >> n;
    Complexo complexos[n];
    for(int i = 0;i<n;i++){
        cin >> complexos[i].inteiro;
        cin >> complexos[i].imaginario;
    }
    int posicao = 1;
    imprimeComplexos(n, complexos);
    conjugado(posicao, complexos);
    modulo(posicao, complexos);
    compara(posicao, complexos);
    somaComplexo(n, complexos);
    return 0;
}
