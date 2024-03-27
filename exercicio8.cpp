#include <iostream>
/*
Escreva um programa que leia três números inteiros do usuário e verifique se esses números podem formar os lados de um triângulo. Imprima 1 se puderem formar um triângulo e 0 se não puderem.
*/    
using namespace std;

int main(){
    int x, y, z;
    cout << "Varifica Triangulo\n";
    cout << "Entre com o primeiro lado: ";
    cin >> x;
    cout << "Entre com o segundo lado: ";
    cin >> y;
    cout << "Entre com o terceiro lado: ";
    cin >> z;

    cout << "Formam um triangulo?: " << ((x+y)>z) << endl;

    return false;
}