#include <iostream>

using namespace std;

int main()
{
   cout<<"ingrese un numero"<<endl;
   int n;
   int potencia=1;
   cin>>n;
   for(int i=1;i<=5;i++){
       for(int c=1;c<=i;c++){
          potencia=n*potencia;
       }
   cout<<n<<"^"<<i<<"="<<potencia<<endl;
   potencia=1;

   }


}
