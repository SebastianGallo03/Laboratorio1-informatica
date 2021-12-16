#include <iostream>

using namespace std;

int main()
{
    char caracter;
    cout << endl << " Ingrese un caracter: " ;
                cin >> caracter ;
                cout << endl ;

                if( caracter >= 65 && caracter <= 90 ){         //Letras Mayusculas

                    if( caracter == 65 ){

                        cout << " El carcter ingresado es Vocal." << endl ;
                    }
                    else if( caracter == 69 ){

                        cout << " El carcter ingresado es Vocal." << endl ;

                    }
                    else if( caracter == 73 ){

                        cout << " El carcter ingresado es Vocal." << endl ;

                    }
                    else if( caracter == 79 ){

                        cout << " El carcter ingresado es Vocal." << endl ;
                    }
                    else if( caracter == 85 ){

                        cout << " El carcter ingresado es Vocal." << endl ;
                    }
                    else {

                        cout << " El carcter ingresado es Consonante." << endl ;
                    }
                }

                else if ( caracter >= 97 && caracter <= 122 ) {                                // Letras Minusculas

                    if( caracter == 97 ){

                        cout << " El carcter ingresado es Vocal." << endl ;
                    }
                    else if( caracter == 101 ){

                        cout << " El carcter ingresado es Vocal." << endl ;
                    }
                    else if( caracter == 105 ){

                        cout << " El carcter ingresado es Vocal." << endl ;
                    }
                    else if( caracter == 111 ){

                        cout << " El carcter ingresado es Vocal." << endl ;
                    }
                    else if( caracter == 117 ){

                        cout << " El carcter ingresado es Vocal." << endl ;
                    }
                    else {

                        cout << " El carcter ingresado es Consonante." << endl ;

                    }

                }

                else {

                    cout << endl << " NO es un caracter valido." << endl ;
                }
    return 0;
}
