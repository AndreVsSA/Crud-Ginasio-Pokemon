#include <iostream>
using namespace std;

#include "Treinador.h"


 
    Treinador::Treinador()
    {

    }

    Treinador::Treinador(string nome, string telefone, string registro, string cpf, string codigo)
    {
      ++indice;
        this->code=indice;
      
        this->codigo = codigo;
        this->registro = registro;
        this->cpf = cpf;
        this->nome = nome;
        this->telefone = telefone;
        
    }

    string Treinador::getRegistro()const
    {
    return registro;
    }

    void Treinador::setRegistro(const string registro)
    {
        this->registro = registro;
    }
        void Treinador::toString(){
            cout << " === Treinador ==== " << endl;
            cout << "Registro: "<<registro<<endl;
            cout << "CPF: "<<cpf<<endl;
            cout << "Nome: "<<nome<<endl;
            cout << "Telefone: "<<telefone<<endl;
            cout << "Codigo: "<<codigo<<endl<<endl;;
    }
    
    void Treinador::setCodigo(const string codigo){
      this->codigo = codigo;
    }
    string Treinador::getCodigo()const
    {
      return codigo;
    }
    bool Treinador::operator==(const Treinador& o) const {
      return cpf == o.cpf;
    }
    int Treinador::getCode()const
    {
      return code;
    }