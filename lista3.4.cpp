#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(2);
    char codigo_Produto;
    float preco_Produto;
    cin >> codigo_Produto >> preco_Produto;
    switch(codigo_Produto){
    case 'f':
        if(preco_Produto>500){
            preco_Produto = preco_Produto*0.9;
        }else{
            preco_Produto = preco_Produto*0.95;
        }
        cout << "Preco do fogao com desconto: " << preco_Produto << endl;
        break;
    case 'g':
        if(preco_Produto>2000){
            preco_Produto = preco_Produto*0.7;
        }else if(1000<=preco_Produto<=2000){
            preco_Produto = preco_Produto*0.8;
        }else{
            preco_Produto = preco_Produto*0.9;
        }
        cout << "Preco da geladeira com desconto: " << preco_Produto << endl;;
        break;
    default:
        cout << "Codigo invalido" << endl;
    }
    return 0;
}
