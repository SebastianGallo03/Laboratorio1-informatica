#include <iostream>

using namespace std;

int main()
{
    short int  resto, faltante, b_50k, b_20k, b_10k, b_5k, b_2k, b_1k, m_500, m_200, m_100, m_50 ;   //Var P#2
    int dinero ;
    cout << endl << " Ingrese una cantidad: " ;
                cin >> dinero ;
                cout << endl ;

                if( dinero > 0 ){

                    b_50k = dinero / 50000 ;

                    resto = dinero % 50000 ;

                    b_20k = resto / 20000 ;

                    resto = resto % 20000 ;

                    b_10k = resto / 10000 ;

                    resto = resto % 10000 ;

                    b_5k = resto / 5000 ;

                    resto = resto % 5000 ;

                    b_2k = resto / 2000 ;

                    resto = resto % 2000 ;

                    b_1k = resto / 1000 ;

                    resto = resto % 1000 ;

                    m_500 = resto / 500 ;

                    resto = resto % 500 ;

                    m_200 = resto / 200 ;

                    resto = resto % 200 ;

                    m_100 = resto / 100 ;

                    resto = resto % 100 ;

                    m_50 = resto / 50 ;

                    faltante = resto % 50 ;

                    cout << endl ;

                    cout << " >Billete(s) de 50k: " << b_50k << endl ;
                    cout << " >Billete(s) de 20k: " << b_20k << endl ;
                    cout << " >Billete(s) de 10k: " << b_10k << endl ;
                    cout << " >Billete(s) de 5k: " << b_5k << endl ;
                    cout << " >Billete(s) de 2k: " << b_2k << endl ;
                    cout << " >Billete(s) de 1k: " << b_1k << endl ;
                    cout << " >Moneda(s) de 500: " << m_500 << endl ;
                    cout << " >Moneda(s) de 200: " << m_200 << endl ;
                    cout << " >Moneda(s) de 100: " << m_100 << endl ;
                    cout << " >Moneda(s) de 50: " << m_50 << endl ;
                    cout << " >Faltante: " << faltante << endl ;

                }
                else if ( dinero <= 0 ) {

                    cout << endl << " Ingrese una cantidad de dinero superior a cero. " << endl ;

                }
    return 0;
}
