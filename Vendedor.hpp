#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {

    public:
        Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) 
            : Empregado(nome, salarioHora), quotaMensalVendas(quotaMensalVendas) {}

        double quotaTotalAnual() const;

        void setQuotaMensalDeVendas(double quotaMensalVendas);

        double getQuotaMensalDeVendas ()const;

        void imprimeContracheque(double horasTrabalhadas) ;

    protected:
	    double quotaMensalVendas;
};

#endif