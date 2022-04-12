#include <iostream>

using namespace std;

int main()
{   int n;
    cout << "ingrese un numero" << endl;
    cin>>n;
    cout << "Multiplos menores que 100" << endl;

    for(int i=n;i<=100;i++){
        if(i%n==0){
            cout<<i<<endl;
        }
    }
    //hola mundo

    return 0;
}
