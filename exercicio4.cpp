#include <iostream>
/*
Faça um programa que leia um número inteiro do usuário e verifique se é positivo. Imprima 1 se for positivo e 0 se for negativo.
*/    
using namespace std;

int main(){
    int x;

    cout << "Entre com um numero inteiro: ";
    cin >> x;
  
    cout << "Imprime 1 se for positivo e 0 se for negativo\nO numero eh: " << (x>0) << endl;

    return false;
}