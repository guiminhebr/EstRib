#include <iostream>
#include <string>
using namespace std;

int main() {
    string palavra_teste; //variavel pra palavra a ser inseirda
    cout << "Digite uma Palavra: " << endl; //entrada da palavra
    getline(cin, palavra_teste); //getline pra remover espaços desnecessarios 

    int contador = 0; //variavel de contagem e acumulador. usei um loop clássico aqui 
    for (size_t i =0; i < palavra_teste.length(); i++) { 
        if (tolower(palavra_teste[i]) == 'a') { //verifica se tem 'a'
            contador = contador+1;
        }
    }

    // Exibindo o resultado
    if (contador > 0) {
        cout << "A letra 'a' ocorre " << contador << " vezes na palavra." << endl;
    } else {
        cout << "A letra 'a' não ocorre na palavra." << endl;
    }

    return 0;
}

