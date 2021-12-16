#include <iostream>

using namespace std;

int main()
{   short int fibonacci, actual = 1, ant = 0, ste, suma_fib = 0;
    cout << endl << " Ingrese un entero: " ;
               cin >> fibonacci ;
               cout << endl ;

               while ( actual <= fibonacci) {

                   ste = ant + actual ;

                   if( actual % 2 == 0 ){              //Condicional para saber si el numero de la serie es par

                       suma_fib = suma_fib + actual ;

                   }

                   ant = actual ;

                   actual = ste ;

               }

               cout << endl << " La suma de los numeros pares menores a " << fibonacci << " de la serie de Fibonacci es: " << suma_fib << endl ;
    return 0;
}
