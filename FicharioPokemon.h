#ifndef FICHARIOPOKEMON_H
#define FICHARIOPOKEMON_H
#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include "Pokemon.h"



 class FicharioPokemon{
   private:
        
        
        
        vector <Pokemon> pokemons;
   
   public:
          FicharioPokemon(vector <Pokemon>);
        void cadastrar();
        void alterar();
        void excluir();
        void consultar();
        void relatorio();
};
#endif