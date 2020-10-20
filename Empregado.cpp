#include "Empregado.hpp"

Empregado::Empregado(std::string nome, double salarioHora){
    this->nome = nome;
    this->salarioHora = salarioHora;
}

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