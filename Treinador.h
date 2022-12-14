#ifndef TREINADOR_H
#define TREINADOR_H
#include <string>
using std::string;
#include "Pessoa.h"

class Treinador: public Pessoa{
    private:
        string  registro;
        int code;
        string codigo;
    public:
        static int indice;
        
        Treinador();
        Treinador(string, string, string, string,string);
         bool operator==(const Treinador& o) const;
        void setRegistro(const string);
        string getRegistro() const;
        void toString();
        string getCodigo() const;
        void setCodigo(const string);
        int getCode()const;
        
        
};
#endif