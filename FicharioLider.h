#ifndef FICHARIOLIDER_H
#define FICHARIOLIDER_H
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "LiderGinasio.h"



 class FicharioLider{
   private:
        
        
        
        vector <LiderGinasio> lider;
   
   public:
          FicharioLider(vector <LiderGinasio>);
        void cadastrar();
        void alterar();
        void excluir();
        void consultar();
        void relatorio();
};
#endif