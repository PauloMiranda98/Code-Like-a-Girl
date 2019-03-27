#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<char> pilha;
	
	pilha.push('{');
	pilha.push('[');
	cout << "Top: " << pilha.top() << endl;
	pilha.pop();
	pilha.push('B');
	cout << "Tamanho Pilha: " << pilha.size() << endl;

	return 0;
}
