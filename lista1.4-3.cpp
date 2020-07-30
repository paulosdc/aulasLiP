#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
const int MAX = 60;
void primeiraMaiscula(char frase[]){
    int i = 1;
    while(frase[i] != '\0'){
        if(frase[i-1]==' '){
            frase[i] = toupper(frase[i]);
        }else if(i-1 == 0){
            frase[i-1] = toupper(frase[i-1]);
        }
        i++;
    }
    cout << frase;

}
int main(){
    char frase[MAX];
    cin.getline(frase, MAX);
    primeiraMaiscula(frase);
    return 0;
}
