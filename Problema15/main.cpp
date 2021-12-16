#include <iostream>

using namespace std;

int main()
{
    short int k_p17, n_triangular, n_ii = 1, div_p17 = 0, num_divisores ;           // Var P#17
    bool cond_p17 = true ;
    cout << endl << " Ingrese un numero k: " ;
                cin >> k_p17 ;
                cout << endl ;

                do{

                   n_triangular = ( n_ii*( n_ii + 1 ) ) /2 ;

                   for( int i = 1 ; i <= n_triangular ; i++ ){

                       if( n_triangular %i == 0 ){

                          div_p17++ ;

                       }


                   }

                   if( div_p17 > k_p17 ){

                       cond_p17 = false ;
                       num_divisores = div_p17 ;

                   }

                   n_ii++ ;
                   div_p17 = 0 ;

                }
                while( cond_p17 == true ) ;

                cout << " El numero " << n_triangular << " tiene " << num_divisores << " divisores." << endl ;

    return 0;
}
