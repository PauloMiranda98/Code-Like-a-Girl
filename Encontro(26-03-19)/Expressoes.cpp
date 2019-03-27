#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<char> pilha;
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string s;
		cin >> s;
		
		bool valida = true;
		
		for(char c : s){
			if( (c=='{') or (c=='(') or (c=='[') ){
				pilha.push(c);
			}else{
				if(pilha.size() == 0){
					valida = false;
					break;
				}else{
					if( (pilha.top()=='(') and (c==')') ){
						pilha.pop();
					}else if( (pilha.top()=='[') and (c==']') ){
						pilha.pop();						
					}else if( (pilha.top()=='{') and (c=='}') ){
						pilha.pop();						
					}else{
						valida = false;
						break;
					}
				}
			}
		}
		
		if( pilha.empty() and (valida==true) ){
			cout << 'S' << endl;
		}else{
			cout << 'N' << endl;
		}
		
		while(pilha.size() > 0){
			pilha.pop();
		}
		
	}

	return 0;
}
