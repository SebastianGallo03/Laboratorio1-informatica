#include <iostream>

using namespace std;

int main()
{   cout<<"ingrese un numero"<<endl;
    int n;
    int cont=0;
    int sum=0;
    cin>>n;
    do{
        sum=n+sum;
        cout<<"Ingrese otro numero, 0 para parar"<<endl;
        cin>>n;

        cont ++;
       }
    while(n!=0);
    cout<<"el promedio de los numeros ingresados sera"" "<<sum/cont<<endl;



}
