#include <iostream>

using namespace std;

int main()
{   int a;
    int factorial=1;
    cout << "Ingrese un numero" << endl;
    cin>>a;
    for(int i=0; i<a; i++){
        factorial+=factorial*i;
    }
    cout<<"el factorial es"" "<<factorial<<endl;
    return 0;
}
