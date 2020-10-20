#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

const int META_MESES = 12;

class Vendedor : public Empregado {
    protected:
	    double quotaMensalVendas;

    public:
        Vendedor(std::string nome, double salarioHora, double quotaMensalVendas) 
            : Empregado(nome, salarioHora), quotaMensalVendas(quotaMensalVendas) {};

        double quotaTotalAnual() const;

        void setQuotaMensalDeVendas(double quotaMensalVendas);

        double getQuotaMensalDeVendas ()const;

        void imprimeContracheque(double horasTrabalhadas) ;
};

#endif