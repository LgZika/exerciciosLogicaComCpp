#include <iostream>
/*
Faça um programa que leia um número inteiro do usuário e verifique se é divisível por 3 e por 5. Imprima 1 se for divisível por ambos, e 0 caso contrário.
*/    
using namespace std;

int main(){
    int x;

    cout << "Entre com um numero: ";
    cin >> x;
    cout << "Imprima 1 se for divisivel por 3 e por 5, e 0 caso contrário\n";
    cout << "O numero inserido eh: " << ((x % 3 == 0) && (x % 5 == 0)) << endl;

    return false;
}