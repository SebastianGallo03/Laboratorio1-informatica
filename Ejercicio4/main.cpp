#include <iostream>

using namespace std;

int main()
{   int a,b;
    cout << "ingrese 2 numeros" << endl;
    cin>> a;
    cin>> b;
    if(a>b){
        cout<<"el numero"" "<<b<<" ""es el menor"<<endl;
    }
    if(b>a){
        cout<<"el numero"" "<<a<<" ""es el menor"<<endl;
    }
    else cout<<" los numeros son iguales"<<endl;

    return 0;
}
