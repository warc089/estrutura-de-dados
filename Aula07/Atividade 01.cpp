#include <iostream>
#include <string>
using namespace std;
class Carro {
	private:
		string concessionaria;
		string modelo;
		int ano;
		string cor;
		
	public:
		Carro(string concessionaria, string modelo, int ano, string cor){
			this->concessionaria = concessionaria;
			this->modelo = modelo;
			this->ano = ano;
			this->cor = cor;
		}
		
		void setConcessionaria(string novaConcessionaria){
			concessionaria = novaConcessionaria;
		}
		
		string getConcessionaria(){
			return concessionaria;
		}
		
		void setModelo (string novoModelo){
			modelo = novoModelo;
		}
		
		string getModelo(){
			return modelo;
		}
		
		void setAno(int novoAno){
			ano = novoAno;
		}
		
		int getAno(){
			return ano;
		}
		
		void setCor (string novaCor){
			cor = novaCor;
		}
		
		string getCor(){
			return cor;
		}
		
		void mostrarInfo(){
			cout << " " << " " << endl;
			cout << "concessionaria: " << concessionaria << endl;
			cout << "modelo: " << modelo << endl;
			cout << "ano: " << ano << endl;
			cout << "cor: " << cor << endl;
		}
};

int main() {
	Carro carro1 ("Mazda", "RX7 FD3S", 1992, "Branco Perola");
	
	carro1.mostrarInfo();
	
	return 0;
	
	}
