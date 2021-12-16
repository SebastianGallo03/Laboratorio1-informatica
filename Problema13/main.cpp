#include <iostream>

using namespace std;

int main()
{
    short int n , n0 ;
    cout << " --PROBLEMA No.15--" << endl ;
               cout << endl << " Ingrese un numero impar: " ;
               cin >> n ;
               cout << endl ;

               if( n%2 != 0 ){

                   for(int f = 0 ;f < n ; f++ ){


                                   for(int c = 0 ; c < n ; c++ ){


                                       if( f > c && f >= n-c-1 ){

                                           n0 = 2*(1+f)-n ;

                                           cout << n0*n0-2*(n0-1)-c+n-1-f << '\t' ;

                                       }
                                       else if( f <= c && f > n-c-1 ){

                                           n0 = n-1-c ;

                                           cout << ( n-2*(1+n0) )*( n-2*(1+n0) ) + 1 + f-(n0+1) << '\t' ;  // Triangulo derecho

                                       }

                   else if( f <= c && f <= n-c-1 ){

                                           cout << ( n-2*f )*( n-2*f-1 )+1+c-f << '\t' ;

                                       }
                                       else{

                                           cout << ( n-2*c )*( n-2*c-1 )+1-f+c << '\t' ;

                                       }
                                   }

                                   cout << endl << endl << endl;

                               }

               }
               else{

                   cout << endl << " Ingreso un numero par..." << endl ;

               }

    return 0;
}
