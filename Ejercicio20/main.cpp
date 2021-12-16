#include <iostream>

using namespace std;

int main()
{
    short int pal, r_div, n_dig = 0, modulo, cociente, pal_2 = 0, pot_10 = 1,pmto ;
    cout << endl << " Ingrese un numero: " ;
    cin >> pal ;
    cout << endl ;
    r_div = pal ;
    cociente = pal ;
    do{
         r_div = r_div / 10 ;
          n_dig++ ;
       }
    while( r_div > 0) ;

        pmto = n_dig - 1 ;

            for( int i = 1 ; i <= n_dig ; i++ ){

               modulo = cociente % 10 ;

               r_div = cociente / 10 ;

                   for( int e = pmto ; e > 0 ; e-- ){

                       pot_10 = 10 * pot_10 ;
                   }

                   pal_2 = (modulo*pot_10) + pal_2 ;
                   cociente = r_div ;
                   pmto-- ;
                   pot_10 = 1 ;
               }

               if( pal == pal_2 ){

                   cout << " " << pal << " es un palindromo." << endl ;
               }
               else {

                   cout << " " << pal << " NO es un palindromo." << endl ;

               }
    return 0;
}
