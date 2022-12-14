#ifndef POKEMON_H
#define POKEMON_H
#include <string>
using std::string;

class Pokemon {

private:
  string tipo;
  string nome;
  string numero;
  string apelido;
  int code;

public:
  static int indice;

  Pokemon();
  Pokemon(string, string, string, string);
  bool operator==(const Pokemon &o) const;
  string getTipo() const;
  void setTipo(const string);
  string getNome() const;
  void setNome(const string);
  string getNumero() const;
  void setNumero(const string);
  string getApelido() const;
  void setApelido(const string);
  void toString();
  int getCode() const;
};
#endif