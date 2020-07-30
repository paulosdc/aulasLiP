#include <iostream>
#include <cstring>

using namespace std;
const int MAX = 51;
void concatena(char str1[], char str2[]){
    int tamanho2 = strlen(str2);
    int tamanho = strlen(str1);
    int i = 0;
    cout << str1 << " ++ " << str2 << " = ";
    while(i<tamanho2){
        str1[tamanho + i] = str2[i];
        i++;
    }
    str1[tamanho+tamanho2] = '\0';
    cout << str1;
}


int main(){
    char str1[MAX], str2[MAX];
    cin.getline(str1, MAX);
    cin.getline(str2, MAX);
    concatena(str1, str2);
    return 0;
}
