#include "Empregado.hpp"

double Empregado::pagamentoMes(double horasTrabalhadas) {

    double calculoHoras = horasTrabalhadas;

    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > HORAS_DIARIAS)
        calculoHoras += (horasTrabalhadas - HORAS_DIARIAS) / 2;
    
    return calculoHoras * this->salarioHora;
}

//Setters
void Empregado::setSalarioHora(double salario){
    this->salarioHora = salario;
}

//Getters
std::string Empregado::getNome () const {
    return this->nome;
}

double Empregado::getSalarioHora() const {
    return this->salarioHora;
}

void Empregado::imprimeContracheque(double horasTrabalhadas) {
    std::cout << "Nome: " << this->nome << std::endl;
    std::cout << "Salario Mes: " << this->pagamentoMes(horasTrabalhadas) << std::endl;
}  