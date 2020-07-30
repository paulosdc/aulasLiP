#include <iostream>
#include <cstring>

using namespace std;
const int MAX = 51;
void trocaLetras(char c1, char c2, char str[]){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == c1){
            str[i] = c2;
        }else if(str[i] == c2){
            str[i] = c1;
        }
        i++;
    }
}

int main(){
    char str[MAX];
    cin.getline(str, MAX);
    char c1, c2;
    cin >> c1 >> c2;
    cout << str << " => " << endl;
    trocaLetras(c1, c2, str);
    cout << str;
}
