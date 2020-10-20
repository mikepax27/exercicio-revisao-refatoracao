#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

    Engenheiro eng1("Joao Snow", 35, 3);
    eng1.imprimeContracheque(9.5);
    std::cout << std::endl;
    
    Engenheiro eng2("Daniela Targaryen", 30, 1);
    eng2.imprimeContracheque(8);
    std::cout << std::endl;
    
    Engenheiro eng3("Bruno Stark", 30, 2);
    eng3.imprimeContracheque(8);  
    std::cout << std::endl;
    
    
    Vendedor vend1("Tonho Lannister", 20, 5000);
    vend1.imprimeContracheque(6);
    std::cout << std::endl;
    
    Vendedor vend2("Jose Mormont", 25, 3000);
    vend2.imprimeContracheque(8);
    std::cout << std::endl;  
    
    Vendedor vend3("Sonia Stark", 30, 4000);
    vend3.imprimeContracheque(8);
   
    return 0;	
}