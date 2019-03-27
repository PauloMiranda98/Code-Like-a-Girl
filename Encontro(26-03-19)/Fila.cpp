#include <iostream>
#include <queue>

using namespace std;

int main(){
	queue<char> fila;
	
	fila.push('A');
	fila.push('B');
	cout << "Frente: " << fila.front() << endl;
	fila.pop();
	fila.push('B');
	cout << "Tamanho Fila: " << fila.size() << endl;

	return 0;
}
