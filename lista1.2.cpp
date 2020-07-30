#include <iostream>
using namespace std;
 int main(){
    bool a=true,b=false,c=false,d=true;
    cout<<(!a || (!b && d && !c))<<endl;
    cout<<!(a || b || c)<<endl;
    cout<<(a && b && c && d) <<endl;
    cout<<!(a|| b )<<endl;
    return 0;
}
