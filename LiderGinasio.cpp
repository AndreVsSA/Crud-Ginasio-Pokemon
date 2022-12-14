#include <iostream>
using namespace std;

#include "LiderGinasio.h"


 
    LiderGinasio::LiderGinasio()
    {

    }

    LiderGinasio::LiderGinasio(string insignia, string cpf, string nome, string telefone, string tipo)
    {
     ++indice;
      this->code=indice;      
        this->insignia = insignia;
        this->cpf = cpf;
        this->nome = nome;
        this->telefone = telefone;
        this->tipo = tipo; 
    }

    string LiderGinasio::getInsignia()const
    {
    return insignia;
    }

    void LiderGinasio::setInsignia(const string insignia)
    {
        this->insignia = insignia;
    }
        void LiderGinasio::toString(){
            cout << " === Lider de Ginasio ==== " << endl;
            cout << "Insignia: "<<insignia<<endl;
            cout << "CPF: "<<cpf<<endl;
            cout << "Nome: "<<nome<<endl;
            cout << "Telefone: "<<telefone<<endl;
            cout << "Tipo: "<<tipo<<endl<<endl;
    }
    
    void LiderGinasio::setTipo(const string){
      this->tipo = tipo;
    }
    string LiderGinasio::getTipo()const
    {
      return tipo;
    }
    bool LiderGinasio::operator==(const LiderGinasio& o) const {
      return code == o.code;
    }
    int LiderGinasio::getCode()const
    {
      return code;
    }

