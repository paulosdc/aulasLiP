#include <iostream>
using namespace std;
bool ehPar(int y){
    if(y==0){
        return true;
    }else if(y==1){
        return false;
    }
    if(y>2){
        ehPar(y-2);
    }
}
int main(){
    int y;
    cin >> y;
    bool res = ehPar(y);
    if(res) cout << y << " � par" << endl;
    else cout << y << " � �mpar" << endl;
    return 0;
}

