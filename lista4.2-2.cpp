#include <iostream>
#include <cctype>
using namespace std;
int vencedor(int& pontosA, int& pontosB);
void cartas(char& c, char& r, int& pontosA, int& pontosB){
   for(int i = 1;i<=5;i++){ //pro jogador A
        cin >> r;
        if (c == r || toupper(c)==r || c==toupper(r)){
            pontosA += 3;
        }else if(c!=r && isupper(c) && isupper(r)){
            pontosA += 1;
        }else if(c!=r && islower(c) && islower(r)){
            pontosA += 1;
        }else{
            pontosA += 0;
        }
   }

    for(int i = 1;i<=5;i++){ //pro jogador B
        cin >> r;
        if (c == r || toupper(c)==r || c==toupper(r)){
            pontosB += 3;
        }else if(c!=r && isupper(c) && isupper(r)){
            pontosB += 1;
        }else if(c!=r && islower(c) && islower(r)){
            pontosB += 1;
        }else{
            pontosB += 0;
        }
   }
   int vitoria = vencedor(pontosA, pontosB);
   cout << "Pontos A: " << pontosA;
   cout << " Pontos B: " << pontosB;
   if(vitoria == 1){
        cout << " Vencedor A";
   }else if(vitoria == 2){
        cout << " Vencedor B";
   }else if(vitoria == 3){
        cout << " Empate";
   }
}
int vencedor(int& pontosA, int& pontosB){
    int ganhou;
    if(pontosA>pontosB){
        ganhou = 1;
    }else if(pontosA<pontosB){
        ganhou = 2;
    }else{
        ganhou = 3;
    }
    return ganhou;
}
int main(){
    int pontosA = 0, pontosB = 0;
    char c, r;
    cin >> c;
    cartas(c, r, pontosA, pontosB);
    return 0;
}
