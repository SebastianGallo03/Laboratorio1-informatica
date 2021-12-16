#include <iostream>

using namespace std;

int main()
{
    short int numer_o, numerador, base_1 = -1 ;
    float aproximacion = 0.0, pi_2, exp_o, denominador_2 ;
    cout << endl << " Ingrese un numero entero: " ;
                cin >> numer_o ;
                cout << endl ;

                for( int i = 1 ; i <= numer_o ; i++ ){

                    exp_o = ( -1 ) * base_1 ;

                    base_1 = exp_o ;

                    numerador = base_1 ;

                    denominador_2 = ( 2*i ) - 1 ;

                    aproximacion = aproximacion + ( ( numerador/denominador_2 ) ) ;

                }

                pi_2 = 4 * aproximacion ;

                cout << endl << "El valor de Pi, con " << numer_o << " elementos sumados es: " << pi_2 << endl ;

    return 0;
}
