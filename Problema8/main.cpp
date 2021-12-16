#include <iostream>

using namespace std;

int main()
{
   short int n_final = 0 , n_primo = 0, conta_2 = 0, num_i ;
   cout << endl << " Ingrese un numero n: ";
               cin >> num_i ;
               cout << endl ;

               for( int numero = 1 ; n_primo < num_i ; numero++ ){

                   for( int c = 1 ; c <= numero ; c++ ){

                       if( numero%c == 0 ){

                           conta_2++ ;

                       }

                   }

                   if( conta_2 == 2 ){

                       n_primo++ ;

                       n_final = numero ;

                   }

                   conta_2 = 0 ;

               }

               cout << " n-esimo numero primo: " << n_final << endl ;


    return 0;
}
