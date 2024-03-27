#include <iostream>
/*
Crie um programa que converta uma temperatura de Celsius para Fahrenheit. O usuário deverá fornecer a temperatura em Celsius e o programa imprimirá a temperatura equivalente em Fahrenheit.
*/    
using namespace std;

int main(){
    float celsius;

    cout << "Entre com a temperatura em graus Celsius: ";
    cin >> celsius;
    cout << "A temperatura em Fahrenheit eh: " << ((celsius * 9/5) + 32) << " °F" << endl;

    return false;
}