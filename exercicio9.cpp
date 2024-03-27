#include <iostream>
/*
Escreva um programa que leia um número inteiro do usuário e verifique se é positivo e par. Imprima 1 se for positivo e par, e 0 caso contrário.
*/    
using namespace std;

int main(){
    int x;

    cout << "Entre com um numero: ";
    cin >> x;
    cout << "Imprima 1 se for positivo e par, e 0 caso contrário\n";
    cout << "O numero inserido eh: " << ((x % 2 == 0) && (x > 0)) << endl;

    return false;
}