#include <iostream>
/*
Escreva um programa que receba a base e a altura de um triângulo do usuário e calcule a área desse triângulo.
*/    
using namespace std;

int main(){
    float base, height;

    cout << "Entre com a base do triangulo: ";
    cin >> base;
    cout << "Entre com a altura do triangulo: ";
    cin >> height;
    cout << "A area do triangulo eh: " << ((base*height)/2) << endl;

    return false;
}