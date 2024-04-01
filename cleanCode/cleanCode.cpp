#include <iostream> 

#define RESET   "\033[0m"
#define VERMELHO "\033[31m"      /* Red */
#define VERDE   "\033[32m"      /* Green */
#define AMARELO  "\033[33m"      /* Yellow */
#define AZUL    "\033[34m"      /* Blue */

/*
Crie um programa que solicite ao usuário seu nome, idade e cor favorita. Em seguida, imprima essas informações com mensagens coloridas no terminal, e utilize ASCII Art para adicionar um elemento visual ao final do programa.

Ideia inacabada: transform(color.begin(), color.end(), color.begin(), ::toupper); //transforma a string da cor em maiuscula;
requer biblios <algorithm> e <cctype>

*/



using namespace std;

int main() {
    string userName, favoriteColor;
    int userAge;

    cout << "Entre com seu nome: ";
    getline(cin, userName);
    cout << "Entre com a sua idade: ";
    getline(cin, userName);
    cout << "Entre com sua cor favorita: ";
    getline(cin, favoriteColor);

    cout << endl;
    cout << AZUL << "Nome: " << userName << RESET << endl;
    cout << VERDE << "Idade: " << userAge << RESET << endl;
    cout << AMARELO << "Cor Favorita: " << favoriteColor << RESET << endl;
    cout << VERDE <<
        "    ,*-.    \n"
        "    |  |    \n"
        ",.  |  |    \n"
        "| |_|  | ,. \n"
        "`---.  |_| |\n"
        "    |  .--` \n"
        "    |  |    \n"
        "    |  |    \n" << RESET << endl;
    return 0;
}