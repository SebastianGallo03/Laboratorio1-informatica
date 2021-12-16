#include <iostream>

using namespace std;

int main()
{   int n;
    bool nperf=false;
    cout << "ingrese un numero" << endl;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i*i==n){
            nperf=true;
        }
    }
    if(nperf==true){
        cout<<"El numero ingresado es un cuadrado perfecto"<<endl;
    }
    else {
          cout<<"El numero ingresado NO es un cuadrado perfecto"<<endl;
         }
    return 0;
}
