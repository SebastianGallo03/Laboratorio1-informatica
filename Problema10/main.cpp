#include <iostream>

using namespace std;

int main()
{
    short int num_ero, divisor = 2, f_primo = 1, cont_3 = 0 ;
    cout << endl << " Ingrese un numero: " ;
                cin >> num_ero ;
                cout << endl ;

                do{

                    if( num_ero % divisor == 0 ){

                        num_ero = num_ero / divisor ;

                        for( int i = 1 ; i <= divisor ; i++ ){

                            if( divisor % i == 0 ){

                                cont_3++ ;

                            }

                        }

                        if( cont_3 == 2 ){

                            if( f_primo < divisor ){

                                f_primo = divisor ;

                            }

                        }

                        cont_3 = 0 ;

                    }
                    else{

                        divisor++ ;

                    }

                }
                while( num_ero > 1 ) ;

                cout << " El mayor factor primo es: " << f_primo << endl ;

    return 0;
}
