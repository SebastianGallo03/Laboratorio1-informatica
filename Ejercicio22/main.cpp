#include <iostream>

using namespace std;

int main()
{
    short int tiempo, t_h, t_min, t_seg;
    cout << endl << " Ingrese un numero entero: " ;
               cin >> tiempo ;
               cout << endl ;

               t_h = tiempo / 3600 ;

               if( (tiempo % 3600) >= 60  ){

                   t_min = (tiempo%3600) / 60 ;

                   t_seg = (tiempo%3600) % 60 ;
               }
               else{
                   t_min = 0 ;
                   t_seg = tiempo % 3600 ;

               }

           cout << endl << " El numero ingresado en formato horas:minutos:segundos es= " << t_h << ":" << t_min << ":" << t_seg << endl ;
    return 0;
}
