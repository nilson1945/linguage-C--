#include<iostream>
using namespace std;

int main()
{
    int variant = 100;
    char c = 'r';
    double pFlutuante = 5.99;


    cout << "O valor da variante  e:" << variant << endl ;

    cout << "O valor da variante c e:" << c << endl;

    cout << "O valor da varinate pFlutuante e:" << pFlutuante << endl;

    cout<< "Memoria da variante variant: " << sizeof(variant) << "bytes"<<endl;

    cout<< "Memoria da variante c: " << sizeof(c)<< "bytes"<<endl;

    cout<< "Memoria da variante pFlutuante: " << sizeof(pFlutuante)<< "bytes"<<endl;


    return 0;
}