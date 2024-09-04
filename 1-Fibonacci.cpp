#include <iostream>
using namespace std;

//fun��o que verifica se o numero pertence a sequencia de fibonacci
bool VerificaFibonacci(int x) {
    if (x < 0) return false; //n�o existe numero negativo na sequencia de fibonacci

    int a = 0, b = 1; //primeiros numeros de fibonaci
    if (x == a || x == b) return true; // por serem os primeiros numeros, n�o aplicaremos a logica da sequencia neles

    // cria a sequencia at� o numero informado
    while (b < x) {
        int temp = a + b;
        a = b;
        b = temp;
    }

    // Verifica se o n�mero informado pelo usuario � o ultimo q foi gerado
    return b == x;
}

int main() {
    int num;
    cout << "Digite um n�mero: ";
    cin >> num;

    if (VerificaFibonacci(num)) {
        cout << num << " pertence � sequ�ncia de Fibonacci." << endl;
    } else {
        cout << num << " n�o pertence � sequ�ncia de Fibonacci." << endl;
    }

    return 0;
}

