#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    short int numero_aleatorio, num_intento, loser=0 ;
    srand(time(NULL)) ;
    cout << endl << " --Adivinacion de un Numero 2.0--" << endl ;
                cout << " >La maquina elige un numero al azar entre 0 y 100." << endl ;

                numero_aleatorio = rand() % 101 ;

                do{
                    cout << endl << " Ingrese un numero: " ;
                    cin >> num_intento ;

                    if( num_intento > numero_aleatorio ){

                        cout << endl << " El numero a adivinar es MENOR." << endl ;
                    }
                    else if ( num_intento < numero_aleatorio ) {

                        cout << endl << " El numero a adivinar es MAYOR." << endl ;
                    }
                    loser++ ;
                }
                while( numero_aleatorio != num_intento ) ;

                cout << endl << " ++ Acertaste, el numero era " << numero_aleatorio << " ++" << endl ;
                cout << "       [No. de Intentos: " << loser << "]" << endl ;


}
