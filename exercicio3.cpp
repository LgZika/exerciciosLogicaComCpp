#include <iostream>
/*
Escreva um programa que receba três números reais do usuário e imprima a média deles.
*/    
using namespace std;

int main(){
    float x, y, z;
    
    cout << "Calculadora de Medias (3 numeros)\n";

    cout << "Entre com o primeiro numero: ";
    cin >> x;
    cout << "Entre com o segundo numero: ";
    cin >> y;
    cout << "Entre com o terceiro numero: ";
    cin >> z;

    cout << "A media dos numeros eh: " << ((x+y+z)/3) << endl;

    return false;
}