#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() const{
	return quotaMensalVendas * 12;
}
	
double Vendedor::getQuotaMensalDeVendas() const {
    return this->quotaMensalVendas;
}

void Vendedor::setQuotaMensalDeVendas(double quotaMensalVendas){
    this->quotaMensalVendas = quotaMensalVendas;
}

void Vendedor::imprimeContracheque(double horasTrabalhadas) {
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
} 