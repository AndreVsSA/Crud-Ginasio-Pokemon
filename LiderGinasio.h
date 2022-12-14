#ifndef LIDERGINASIO_H
#define LIDERGINASIO_H
#include <string>
using std::string;
#include "Pessoa.h"

class LiderGinasio: public Pessoa{
    private:
        string insignia;
        int code;

        string tipo;
    public:
        static int indice;

        LiderGinasio();
        LiderGinasio(string, string, string, string, string);
        bool operator==(const LiderGinasio& o) const;
        void setInsignia(const string);
        string getInsignia() const;
        void toString();
        void setTipo(const string);
        string getTipo() const;
        int getCode()const;
};
#endif