#include <iostream>

using namespace std;

int main()
{
    short int mcm_numero1, mcm_numero2, mcm_numero3, mcm_cont = 0 ;
    bool mcm_verda = true ;
    cout << " --PROBLEMA No.11--" << endl ;
                cout << endl << " Ingrese un numero: " ;
                cin >> mcm_numero1 ;
                cout << endl ;

                mcm_verda = true;

                mcm_numero2 = mcm_numero1 - 1 ;

                while( mcm_verda ){

                    mcm_numero2 = mcm_numero2 + 1 ;

                    mcm_numero3 = 0 ;

                    for( mcm_cont = 1 ; mcm_cont <= mcm_numero1 ; mcm_cont++ ){

                        if( mcm_numero2 %mcm_cont == 0 ){

                            mcm_numero3 = mcm_numero3 + 1 ;

                            if( mcm_numero3 == mcm_numero1 ){

                                mcm_verda = false ;

                            }

                        }


                    }

                }


                cout<< " El MCM es: " << mcm_numero2 << endl ;


    return 0;
}
