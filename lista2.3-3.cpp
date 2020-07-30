#include <iostream>
#include <cstring>
using namespace std;
const int MAX = 60;
void embaralhaLetras(char str1[], char str2[]){
    cout << str1 << " + " << str2 << " = ";
    int tamanho1 = strlen(str1);
    int tamanho2 = strlen(str2);
    char str3[tamanho1+tamanho2];
    int i = 0, c = 0, x = 0;
    while(i<tamanho1){
        if(i%2==0){
            str3[i] = str1[c];
            c++;
        }else{
            str3[i] = str2[x];
            x++;
        }
        i++;
    }
    i = tamanho1;
    while(i<tamanho1+tamanho2){
        if(i%2==0 && (c<=tamanho1 || x<=tamanho2)){
            str3[i] = str1[c];
            c++;
        }else{
            str3[i] = str2[x];
            x++;
        }
        if(c>tamanho1 && x<tamanho2){
            c--;
            str3[i] = str2[x];
            x++;
        }else if(x>tamanho2 && c<tamanho1){
            x--;
            str3[i] = str1[c];
            c++;
        }
    i++;
    }
    str3[tamanho1+tamanho2] = '\0';
    cout << str3;
}
int main(){
    char str1[MAX], str2[MAX];
    cin.getline(str1, MAX);
    cin.getline(str2, MAX);
    embaralhaLetras(str1, str2);
    return 0;
}

