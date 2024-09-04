#include <iostream>
using namespace std;

//função que verifica se o numero pertence a sequencia de fibonacci
bool VerificaFibonacci(int x) {
    if (x < 0) return false; //não existe numero negativo na sequencia de fibonacci

    int a = 0, b = 1; //primeiros numeros de fibonaci
    if (x == a || x == b) return true; // por serem os primeiros numeros, não aplicaremos a logica da sequencia neles

    // cria a sequencia até o numero informado
    while (b < x) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    // Verifica se o número informado pelo usuario é o ultimo q foi gerado
    return b == x;
}

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    if (VerificaFibonacci(num)) {
        cout << num << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << num << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}

