#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

const double HORAS_DIARIAS = 8;

class Empregado {
	
    public:
        Empregado(std::string nome, double salarioHora);

        double pagamentoMes(double horasTrabalhadas);

        void setSalarioHora(double salario);

        std::string getNome () const;

        double getSalarioHora () const;

        virtual void imprimeContracheque(double horasTrabalhadas);        

    protected:
        double salarioHora;
        std::string nome;  
};

#endif