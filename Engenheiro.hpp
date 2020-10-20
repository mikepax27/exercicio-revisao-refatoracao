#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {

    public:
        Engenheiro(std::string nome, double salarioHora, int projetos) 
            : Empregado(nome, salarioHora), projetos(projetos) {}

        void setProjetos(int projetos);

        int getProjetos() const;

        void imprimeContracheque(double horasTrabalhadas) ;


    protected:
	    int projetos;
};

#endif