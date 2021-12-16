#include <iostream>

using namespace std;

int main()
{
    short int a, b, c, conta_1 = 0, suma_multiplos = 0, multiplo_1, multiplo_2 ;
    cout << endl << " Ingrese 2 numeros: ";
                cin >> a >> b ;
                cout << endl << " Ingrese un numero limite: ";
                cin >> c ;
                cout << endl ;

                for( int i = 1 ; a*i < c ; i++ ){

                    if( i > 1 ){

                       cout << " +" ;

                    }

                    multiplo_2 = a*i ;

                    cout << " " << multiplo_2 ;

                    suma_multiplos = suma_multiplos + multiplo_2 ;

                }

                for( int i = 1 ; b*i < c ; i++ ){

                    multiplo_1 = b*i ;

                    for( int k = 1 ; a*k < c ; k++ ){

                        if( multiplo_1 == a*k ){

                            conta_1++ ;

                        }

                    }

                    if( conta_1 == 0 ){

                        cout << " + " << multiplo_1 ;

                        suma_multiplos = suma_multiplos + multiplo_1 ;

                    }

                }

                cout << " = " << suma_multiplos ;

                cout << endl ;
    return 0;
}
