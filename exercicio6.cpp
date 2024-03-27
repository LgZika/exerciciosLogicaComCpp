#include <iostream>
/*
Escreva um programa que determine se um ano fornecido pelo usuário é bissexto ou não. Imprima 1 se for bissexto e 0 se não for.

*/    
using namespace std;

int main(){
    int ano;

    cout << "Entre com um ano: ";
    cin >> ano;
    cout << "O ano eh bissexto?: " << (((ano % 4 == 0) && (ano % 100 != 0)) || ((ano % 4 == 0) && (ano % 100 == 0) && (ano % 400 == 0))) << endl;

    return false;
}