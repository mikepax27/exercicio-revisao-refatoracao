#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

const double HORAS_DIARIAS = 8;

class Empregado {
    protected:
        std::string nome;
        double salarioHora; 
	
    public:
        Empregado(std::string nome, double salarioHora) : nome(nome), salarioHora(salarioHora) {};

        double pagamentoMes(double horasTrabalhadas);

        void setSalarioHora(double salario);

        std::string getNome () const;

        double getSalarioHora () const;

        virtual void imprimeContracheque(double horasTrabalhadas);        
};

#endif