#include <iostream>

using namespace std;

int main()
{
    int palindromo, res_div2, ndigitos = 0, modulo2, cociente, palindromo_2 = 0, potencia10 = 1, parametro, p_mayor = 0, m1, m2 ;
    cout << endl ;

                for( int a = 100 ; a <= 999 ; a++ ){

                    for( int b = 100 ; b <= 999 ; b++ ){

                        palindromo = a*b ;

                        res_div2 = palindromo ;

                        cociente = palindromo ;

                        do{

                            res_div2 = res_div2 / 10 ;

                            ndigitos++ ;

                        }
                        while( res_div2 > 0 ) ;

                        parametro = ndigitos - 1 ;

                        for( int i = 1 ; i <= ndigitos ; i++ ){

                            modulo2 = cociente % 10 ;

                            res_div2 = cociente / 10 ;



                            for( int e = parametro ; e > 0 ; e-- ){

                                potencia10 = 10 * potencia10 ;

                            }

                            palindromo_2 = (modulo2 * potencia10) + palindromo_2 ;

                            cociente = res_div2 ;

                            parametro-- ;

                            potencia10 = 1 ;

                        }

                        if( palindromo == palindromo_2 ){



                            if( p_mayor < palindromo ){

                                p_mayor = palindromo ;

                                m1 = a ;

                                m2 = b ;

                            }

                        }

                       ndigitos = 0 ;

                       potencia10 = 1 ;

                       palindromo_2 = 0 ;

                    }

                }
                cout << " El palindromo mas grande es: "<< p_mayor << endl << " Del producto de: "<< m1 << "*" << m2 ;

    return 0;
}
