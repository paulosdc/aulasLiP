#include <iostream>
using namespace std;
int main(){
    double nota1, nota2, nota3;
    cin >> nota1 >> nota2 >> nota3;
    double media = (nota1+nota2+nota3)/3.0;
    if(media>=5 && nota1>=3.0 && nota2>=3.0 && nota3>=3.0){
        cout << "Aprovado" << endl;
    }else if(media>=3){
        cout << "Final" << endl;
    }else{
        cout << "Reprovado" << endl;
    }


    return 0;
}
