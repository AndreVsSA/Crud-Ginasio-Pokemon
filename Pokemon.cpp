#include <iostream>
using namespace std;

#include "Pokemon.h"


 
    Pokemon::Pokemon()
    {

    }

    Pokemon::Pokemon(string nome, string tipo, string numero, string apelido)
    {
      ++indice;
        this->code = indice;
        this->tipo = tipo;
        this->numero = numero;
        this->apelido = apelido;
        this->nome = nome;
        
        
    }

    string Pokemon::getNumero()const
    {
    return numero;
    }

    void Pokemon::setNumero(const string numero)
    {
        this->numero = numero;
    }
        void Pokemon::toString(){
            cout << " === Pokemon ==== " << endl;
            cout << "Numero: "<<numero<<endl;
            cout << "Apelido: "<<apelido<<endl;
            cout << "Nome: "<<nome<<endl;
            cout << "Tipo: "<<tipo<<endl;
    }
    
    void Pokemon::setTipo(const string tipo){
      this->tipo = tipo;
    }
    string Pokemon::getTipo()const
    {
      return tipo;
    }
    void Pokemon::setNome(const string nome){
      this->nome = nome;
    }
    string Pokemon::getNome()const
    {
      return nome;
    }
    void Pokemon::setApelido(const string apelido){
      this->apelido = apelido;
    }
    string Pokemon::getApelido()const
    {
      return apelido;
    }
    bool Pokemon::operator==(const Pokemon& o) const {
      return code == o.code;
    }
    int Pokemon::getCode()const
    {
      return code;
    }
