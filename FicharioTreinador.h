
#ifndef FICHARIOTREINADOR_H
#define FICHARIOTREINADOR_H
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Treinador.h"



 class FicharioTreinador{
   private:
        
        
        
        vector <Treinador> treinadores;
   
   public:
          FicharioTreinador(vector <Treinador>);
        void cadastrar();
        void alterar();
        void excluir();
        void consultar();
        void relatorio();
        
};
#endif