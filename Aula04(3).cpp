#include <iostream>
using namespace std;

int main(){
	int valor, alga = 1, divisor = 10;
	float res;
	cout << "digite um numero: ";
	cin >> valor;
	while(true){
		
		res = valor / divisor;
		if (res >= 1){
			alga++;
			divisor = divisor * 10;
		}
		else{
			break;
		}
		
	}
	cout << alga;
}
