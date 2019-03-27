#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
struct Aluno{
	int matricula;
	string nome;
};

bool compararAluno(Aluno a, Aluno b){
	if(a.nome == b.nome)
		return a.matricula < b.matricula;
	else
		return a.nome < b.nome;
}

vector<Aluno> v;

int main(){
	cin >> n;
	v.resize(n);
	
	for(int i=0; i<n; i++){
		cin >> v[i].matricula >> v[i].nome;
	}
		
	sort(v.begin(), v.end(), compararAluno);
	
	for(int i=0; i<n; i++){
		cout << v[i].matricula << " " << v[i].nome << endl;
	}
	
}
