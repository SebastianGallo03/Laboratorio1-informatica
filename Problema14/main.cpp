#include <iostream>

using namespace std;

int main()
{
    short int k, m_terminos = 0, n_p16, t = 1, semilla = 0, cont_5 = 0, m2_term ;
    cout << endl << " Ingrese un numero k: " ;
               cin >> k ;
               cout << endl ;

               for( int i = 1 ; i < k ; i++ ){

                       n_p16 = i ;
                       m_terminos = 0 ;

                   do{

                       if( n_p16 %2 == 0 ){

                           n_p16 = n_p16 /2 ;


                       }
                       else if( n_p16 %2 != 0 ){

                           n_p16 = (3*n_p16)+1 ;

                       }

                      m_terminos++ ;

                      m2_term = m_terminos ;

                   }
                   while(n_p16 != 1) ;

                    if( t > m2_term ){

                        semilla = i-1 ;
                        t = m_terminos ;


                    }
                    else if( m2_term > t ){

                        t = m2_term ;


                    }


                   }

                   cout << " Semilla: " << semilla << endl << endl ;

                       do{

                       if( semilla %2 == 0 ){

                           semilla = semilla /2 ;
                           cout << " " << semilla ;

                       }
                       else if( semilla %2 != 0 ){

                           semilla = (3*semilla)+1 ;
                           cout << " " << semilla ;

                       }

                    cont_5++ ;

                   }
                   while(semilla != 1) ;

                   cout << endl << endl << " Terminos: " << cont_5 << endl ;
    return 0;
}
