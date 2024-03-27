#include <iostream>
/*
Crie um programa que leia um número inteiro do usuário e verifique se é par ou não. Imprima 1 se for par e 0 se for ímpar.
*/    
using namespace std;

int main(){
    int x;
    
    cout << "Entre com um numero inteiro: ";
    cin >> x;
    cout << "Se der 1 eh PAR\nSe der 0 eh IMPAR" << endl;
    cout << "O numero inserido eh: " << (x%2==0) << endl;

    return false;
}