#include <iostream>
using namespace std;

int main(){
	int INDICE = 12; //variavel que vai definir o intervalo de repeti��es
	int SOMA = 0; // variavel acumuladora que armazena o resultado de cada itera��o
	int K =1; //variavel de controle que define quanto deve iterar com base no indice
	while ( K < INDICE){
		K = K +1;
		SOMA = SOMA+K;
		
	}
	cout << "O resultado �: " << SOMA;
	
	
	
	
	
	return 0;
}
