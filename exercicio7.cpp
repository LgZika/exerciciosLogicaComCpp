#include <iostream>
/*
Escreva um programa que leia um número inteiro do usuário e verifique se é negativo. Imprima 1 se for negativo e 0 se for positivo ou zero.
*/    
using namespace std;

int main(){
    int x;

    cout << "Entre com um numero inteiro: ";
    cin >> x;
  
    cout << "Imprime 1 se for negativo e 0 se for positivo ou zero\nO numero eh: " << (x<0) << endl;

    return false;
}