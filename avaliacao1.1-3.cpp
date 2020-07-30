#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
const int MAX = 150;
void criptografar(int n, char s1[MAX]){
    int i = 0;
    cout << s1 << " => " << endl;
    while(s1[i]!='\0'){
        if(!ispunct(s1[i]) && !isspace(s1[i]) && !isdigit(s1[i])){
            int posicaoASCII = s1[i];
            if(i%2==0){
                if(islower(s1[i])){
                    if(posicaoASCII+n<=122){
                        s1[i]+=n;
                    }else{
                        int diferenca = (posicaoASCII+n)-122;
                        s1[i]=96+diferenca;
                    }
                }
                if(isupper(s1[i])){
                    if(posicaoASCII+2*n<=90){
                        s1[i]+=2*n;
                    }else{
                        int diferenca = (posicaoASCII+2*n)-90;
                        s1[i]=64+diferenca;
                    }
                }
            }else{
                if(islower(s1[i])){
                    if(posicaoASCII-n>=97){
                        s1[i]-=n;
                    }else{
                        int diferenca = (posicaoASCII-n)-97;
                        s1[i]=123+diferenca;
                    }
                }
                if(isupper(s1[i])){
                   if(posicaoASCII-3*n>=65){
                        s1[i]-=3*n;
                    }else{
                        int diferenca = (posicaoASCII-3*n)-65;
                        s1[i]=91+diferenca;
                    }
                }
            }
        }
        i++;
    }
    cout << s1 << endl;
}
void descriptografar(int n, char s2[MAX]){
    int i = 0;
    cout << s2 << " => " << endl;
    while(s2[i]!='\0'){
        if(!ispunct(s2[i]) && !isspace(s2[i]) && !isdigit(s2[i])){
            int posicaoASCII = s2[i];
            if(i%2==0){
                if(islower(s2[i])){
                    if(posicaoASCII-n>=97){
                        s2[i]-=n;
                    }else{
                        int diferenca = (posicaoASCII-n)-97;
                        s2[i]=123+diferenca;
                    }
                }
                if(isupper(s2[i])){
                    if(posicaoASCII-2*n>=65){
                        s2[i]-=2*n;
                    }else{
                        int diferenca = (posicaoASCII-2*n)-65;
                        s2[i]=91+diferenca;
                    }
                }
            }else{
                if(islower(s2[i])){
                    if(posicaoASCII+n<=122){
                        s2[i]+=n;
                    }else{
                        int diferenca = (posicaoASCII+n)-122;
                        s2[i]=96+diferenca;
                    }
                }
                if(isupper(s2[i])){
                   if(posicaoASCII+3*n<=90){
                        s2[i]+=3*n;
                    }else{
                        int diferenca = (posicaoASCII+3*n)-90;
                        s2[i]=64+diferenca;
                    }
                }
            }
        }
        i++;
    }
    cout << s2 << endl;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    char s1[MAX], s2[MAX];
    cin.getline(s1, MAX);
    cin.getline(s2, MAX);
    criptografar(n, s1);
    descriptografar(n, s2);
    return 0;
}
