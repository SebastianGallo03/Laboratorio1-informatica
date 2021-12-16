#include <iostream>

using namespace std;

int main()
{
    short int num_efinal = 0, cont_4 = 0, n_um ;
    cout << endl << " Ingrese un numero n: " ;
                cin >> n_um ;
                cout << endl ;

                for( int numero = 1 ; numero < n_um ; numero++ ){

                    for( int i = 1 ; i <= numero ; i++ ){

                        if( numero % i == 0 ){

                            cont_4++ ;

                        }

                    }

                    if( cont_4 == 2 ){

                        num_efinal = num_efinal + numero ;

                    }

                    cont_4 = 0 ;

                }

                cout << " La suma de los numeros primos menores a n es: " << num_efinal << endl ;
    return 0;
}
