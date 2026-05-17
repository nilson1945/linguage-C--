#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

int main()
{
    // obj cin
    // obj cout- é o nosso objeto de saida de fluxo, ou seja, passamos a este o que deve ser exibido no monitor

    cout << "Estudando a entrada e saida de dados." << endl;

    cout << 10 + 50 << endl;
    cout << hex << 10 + 50 << endl;

    //cout << setw(10) << 1 << endl;
    //cout << setw(10) << 2 << endl;
    //cout << setw(10) << 3 << endl;
    //cout << setw(10) << 4 << endl;

    cout << setw(10) << 1;
    cout << setw(10) << 2;
    cout << setw(10) << 3;
    cout << setw(10) << 4;

    system("pause");
     
    return 0;
}
