#include <iostream>
using namespace std;

int main(){
	int N;
	cout << "digite um numero inteiro: ";
	cin >> N;
	
	int i = 1;
	int cont = 0;
	
	while (i <= N){
		if (i % 2 ==0){
			cont++;
		}
		i++;
	}
	cout << "a quantidade de numeros pares e: " << cont << endl;
	
	return 0;
}
