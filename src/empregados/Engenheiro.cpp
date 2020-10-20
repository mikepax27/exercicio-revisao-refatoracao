#include "Engenheiro.hpp"

void Engenheiro::setProjetos(int projetos) {
    this->projetos = projetos;
}

int Engenheiro::getProjetos() const {
    return this->projetos;
}

void Engenheiro::imprimeContracheque(double horasTrabalhadas) {
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
    std::cout << "Projetos: " << this->projetos << std::endl;
}  