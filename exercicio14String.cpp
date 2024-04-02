#include <iostream>
#include <string>
#include <algorithm>

/*
Faça um programa que verifique se um número inteiro fornecido pelo usuário é um número palíndromo. Imprima 1 se for palíndromo e 0 caso contrário.
*/

using namespace std;

int main() {
    int num;
    string numTxt, numRev;

    cout << "Entre com um numero inteiro: ";
    cin >> num;

    numTxt = to_string(num); // converte o numero inteiro em string usando a função "to_string()" (<string>)

    numRev = numTxt; // armazena a string em uma variavel para opera-la

    reverse(numRev.begin(), numRev.end()); // inverte a string armazenada usando a "função reverse()" (<algorithm>)

    num = numTxt.compare(numRev); // a funcao .compare retorna 0 se as strings forem iguais

    cout << "-> " << (!num) << endl;
    
    /*
    if (num == 0) { // A logica fica um pouco estranha pois a funcao compare retorna 0 se as strings forem iguais
        cout << "-> 1\n";
        cout << "O numero " << numTxt << " e palindromo pois e igual ao reverso de seu numero " << numRev << endl;
    }
    else {
        cout << "-> 0\n";
        cout << "O numero " << numTxt << " Nao e palindromo pois nao e igual ao reverso de seu numero " << numRev << endl;
    }
    */
    return false;
}