#include <iostream>

using namespace std;

int main()
{   int a;
    int b;
    int contador=1;
    cout << "ingrese la base y la potencia" << endl;
    cin>>a>>b;
    for(int i=0;i<b;i++){
        contador=contador*a;
    }
    cout<<"la potencia es"" "<<contador<<endl;

    return 0;
}
