#include <iostream>

using namespace std;

int main()
{
    short int mes, fecha;
    bool cond_1, cond_2;
    cout << endl << " Ingrese el numero de un mes: " ;
               cin >> mes ;
               cout << endl << " Ingrese el numero del dia: " ;
               cin >> fecha ;
               cout << endl ;

               cond_1 = mes >= 1 && mes <= 12 ;
               cond_2 = fecha >= 1 && fecha <= 31 ;          // Condiciones que evaluan los intervalos del mes y del dia

               if( cond_1 == true && cond_2 == true ){

                   switch ( mes ) {

                       case 1 :

                       if( fecha <= 31 ){

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }

                       break;

                   case 2 :

                       if( fecha <= 28 ){

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }
                       else if ( fecha == 29 ) {

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida \n Unicamente si el ano es bisiesto." << endl ;
                       }
                       else {

                           cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                       }

                   break;

                   case 3 :

                       if( fecha <= 31 ){

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }

                   break;

                   case 4 :

                       if( fecha <= 30 ){

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }
                       else {

                           cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                       }

                   break;

                   case 5 :

                       if( fecha <= 31 ){

                          cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }

                   break;

                   case 6 :

                       if( fecha <= 30 ){

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }
                       else {

                           cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                       }

                   break;

                   case 7 :

                       if( fecha <= 31 ){

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }

                   break;

                   case 8 :

                       if( fecha <= 31 ){

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }

                   break;

                   case 9 :

                       if( fecha <= 30 ){

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }
                       else {
                           cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                       }

                   break;

                   case 10 :

                       if( fecha <= 31 ){

                          cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }

                   break;

                   case 11 :

                       if( fecha <= 30 ){
                         cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;

                       }
                       else {
                           cout << endl << " " << fecha << "/" << mes << " NO es una combinacion valida." << endl ;
                       }

                   break;

                   case 12 :

                       if( fecha <= 31 ){

                           cout << endl << " " << fecha << "/" << mes << " Es una combinacion valida." << endl ;
                       }

                   break;


                   }

               }
               else {

                   cout << " " << fecha << "/" << mes << " NO ES VALIDO..." ;
                   cout << endl << " Ingrese formatos de mes o dia validos." << endl ;
               }

    return 0;
}
