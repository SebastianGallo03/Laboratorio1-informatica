#include <iostream>

using namespace std;

int main()
{
     short int l_1, l_2, l_3, validez = 0 ;
     cout << endl << " Ingrese 3 longitudes: " ;
                 cin >> l_1 >> l_2 >> l_3 ;
                 cout << endl ;

                 if( l_1 + l_2 > l_3 ){

                     validez++ ;
                 }

                 if( l_1 + l_3 > l_2 ){              // Condicionales que miran si los
                                                     //Lados ingresados forman un triangulo
                      validez++ ;
                 }

                 if( l_2 + l_3 > l_1 ){

                     validez++ ;
                 }

                 if( validez == 3 ){

                     if( l_1 == l_2 && l_1 == l_3 ){

                         cout << endl << " Se forma un triangulo Equilatero." << endl ;
                     }
                     else if ( l_1 == l_2 && l_1 != l_3 ) {

                         cout << endl << " Se forma un triangulo Isoceles." << endl ;
                     }
                     else if ( l_1 == l_3 && l_3 != l_2 ) {

                         cout << endl << " Se forma un triangulo Isoceles." << endl ;
                     }
                     else if( l_2 == l_3 && l_2 != l_1 ){

                         cout << endl << " Se forma un triangulo Isoceles." << endl ;
                     }
                     else {

                         cout << endl << " Se forma un triangulo Escaleno." << endl ;
                     }
                 }
                 else{

                     cout << endl << " Las longitudes NO forman un triangulo. " << endl ;
                 }


}
