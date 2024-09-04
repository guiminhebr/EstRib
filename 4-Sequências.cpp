#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    // a)
    int A = 7;
    int proximoA = A + 2;
    cout << "Próximo elemento da sequência a) é " << proximoA << endl;

    // b)
    int B = 64;
    int proximoB = B*2;
    cout << "Próximo elemento da sequência b) é " << proximoB << endl;

    //  c)
    int C = 36; 
    int proximoC = (sqrt(C) + 1) * (sqrt(C) + 1);
    cout << "Próximo elemento da sequência c) é " << proximoC << endl;

    //d)
    int D = 64; 
    int proximoD = (sqrt(D) + 2) * (sqrt(D) + 2);
    cout << "Próximo elemento da sequência d) é " << proximoD << endl;

    // e)
    int E = 13; // proximo elemento fibonacci
    cout << "Próximo elemento da sequência e) é " << E << endl;

    // f)
    int F = 19; // Último elemento conhecido
    int proximoF = F + 1;
    cout << "Próximo elemento da sequência f) é " << proximoF << endl;

    return 0;
}

	

