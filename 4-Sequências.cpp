#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    // a)
    int A = 7;
    int proximoA = A + 2;
    cout << "Pr�ximo elemento da sequ�ncia a) � " << proximoA << endl;

    // b)
    int B = 64;
    int proximoB = B*2;
    cout << "Pr�ximo elemento da sequ�ncia b) � " << proximoB << endl;

    //  c)
    int C = 36; 
    int proximoC = (sqrt(C) + 1) * (sqrt(C) + 1);
    cout << "Pr�ximo elemento da sequ�ncia c) � " << proximoC << endl;

    //d)
    int D = 64; 
    int proximoD = (sqrt(D) + 2) * (sqrt(D) + 2);
    cout << "Pr�ximo elemento da sequ�ncia d) � " << proximoD << endl;

    // e)
    int E = 13; // proximo elemento fibonacci
    cout << "Pr�ximo elemento da sequ�ncia e) � " << E << endl;

    // f)
    int F = 19; // �ltimo elemento conhecido
    int proximoF = F + 1;
    cout << "Pr�ximo elemento da sequ�ncia f) � " << proximoF << endl;

    return 0;
}

	

