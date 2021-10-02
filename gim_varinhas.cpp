// Criação de Varinhas//
#include <iostream>
#include <math.h>
#include <iomanip>

int main (void)

{
	int nivelConjurador;
	int nivelMagia;
	
				
	std::cout << "Nivel do Conjurador:";
	std::cin >> nivelConjurador;
	std::cout << "Nivel da Magia:";
	std::cin >> nivelMagia;
	
	float precoBase = (nivelMagia*nivelConjurador)*750;
	float materiaPrima = precoBase/2;	
	float custoXP = precoBase/25;
	float tempoProd = precoBase/125;
	
	std::cout << " Custo base: " << precoBase << '\n';
	std::cout << " Custo Materia Prima: " << materiaPrima << '\n';
	std::cout << " Custo XP: " << custoXP << '\n';
	
	std::cout << std::fixed << std::setprecision(1);
	std::cout << " Horas para Criar: " << tempoProd << '\n'; 
		
	return 0;
}
