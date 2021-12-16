#include <iostream>

using namespace std;

int main()
{
    short int numero, r_div, num_digito = 1, resultado = 0, modulo_i, res_div_i, r_exp = 1;
    cout << endl << " Ingrese un numero: " ;
                cin >> numero ;
                cout << endl ;

                r_div = numero/10 ;

                if( r_div == 0){

                   cout << "El numero ingresado tiene solo 1 digito..." << endl << endl ;
                   num_digito = 0 ;

                }
                else {

                    while ( r_div > 0 ) {

                        r_div = r_div/10 ;              //Codigo para obtener el # de digitos del numero ingresado

                        num_digito = num_digito + 1 ;

                    }

                }

                for( int i = 1 ; i <= num_digito ; i = i + 1){

                    modulo_i = numero % 10 ;
                                                                      // Codigo para descomponer cada numero en digitos
                    res_div_i = numero / 10 ;                         // Y luego elevarlos al valor de cada uno

                    for( int c = 1 ; c <= modulo_i ; c = c + 1){

                        r_exp = ( modulo_i )*(r_exp) ;

                    }

                    resultado = resultado + r_exp ;

                    numero = res_div_i ;

                    r_exp = 1 ;
                }

                cout << " Resultado de la suma de cada digito elevado a si mismo: " << resultado << endl ;

                cout << endl ;
    return 0;
}
