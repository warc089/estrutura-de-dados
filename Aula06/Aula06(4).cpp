#include <iostream>

using namespace std;

int soma(int a, int b){
	int resultado = a + b;
	return resultado;
}
int sub(int a, int b){
	int resultado = b - a;
	return resultado;
}
int multi(int a, int b){
	int resultado = a * b;
	return resultado;
}
float div(float a, float b){
	float resultado = a / b;
	return resultado;
}

int main(){
	
	int y = 5;
	int x = 3;
	float a = 5;
	float b = 3;
	int resultadoSoma = soma(x, y);
	int resultadoSub = sub(x, y);
	int resultadoMulti = multi(x, y);
	float resultadoDiv = div(x, y);
	
	cout << "A soma de " << x << " e " << y << " e " << resultadoSoma << endl;
	cout << "A subtração de " << y << " e " << x << " e " << resultadoSub << endl;
	cout << "A multiplicação de " << x << " e " << y << " e " << resultadoMulti << endl;
	cout << "A multiplicação de " << a << " e " << b << " e " << resultadoDiv << endl;
	
	return 0;
}
