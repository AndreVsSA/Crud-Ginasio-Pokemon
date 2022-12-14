#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::find;
using std::vector;
#include "FicharioPokemon.h"
#include "Pokemon.h"

FicharioPokemon::FicharioPokemon(vector<Pokemon> pokemons) {
  this->pokemons = pokemons;
}

void FicharioPokemon::cadastrar() {

  string tipo, nome, numero, apelido;

  cout << " === Cadastrar POKEMON ==== " << endl;
  cout << "\nTipo: ";
  cin >> tipo;
  cout << "\nNumero: ";
  cin >> numero;
  cout << "\nNome: ";
  cin >> nome;
  cout << "\nApelido: ";
  cin >> apelido;

  Pokemon pokemon(nome, apelido, tipo, numero);

  auto it = find(pokemons.begin(), pokemons.end(), pokemon);
  if (it != pokemons.end()) {
    cout << "Pokemon já cadastrado!" << endl;
  } else {
    pokemons.push_back(pokemon);
  }
}

void FicharioPokemon::alterar() {
  string nome, apelido, numero, tipo;
  int pos;

  cout << "--==ALTERAR POKEMON==--" << endl;
  cout << "Qual posicao deseja alterar?" << endl;
  cin >> pos;

  if (pokemons[pos].getCode() != 0) {
    cout << "Numero atual: " << pokemons[pos].getNumero() << endl;
    cout << "Digite o novo numero: ";
    cin >> numero;
    pokemons[pos].setNumero(numero);

    cout << "\n\nNome atual: " << pokemons[pos].getNome() << endl;
    cout << "Digite o novo nome: ";
    cin >> nome;
    pokemons[pos].setNome(nome);

    cout << "\n\nApelido atual: " << pokemons[pos].getApelido() << endl;
    cout << "Digite o novo apelido: ";
    cin >> apelido;
    pokemons[pos].setApelido(apelido);

    cout << "\n\nTipo atual do pokemon : " << pokemons[pos].getTipo() << endl;
    cout << "Digite o novo tipo: ";
    cin >> tipo;
    pokemons[pos].setTipo(tipo);

  } else {
    cout << "Posicao invalida" << endl;
  }
};
void FicharioPokemon::excluir()
    {
        int pos, res;
        
        
        cout<<"--==EXCLUIR POKEMON==--"<<endl;
        cout<<"Qual posicao deseja excluir?"<<endl;
        cin>>pos;

        
        if(pos>pokemons.size())
        {
           cout<<"Posicao invalida"<<endl;

        }else
        {
             pokemons[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                 pokemons.erase(pokemons.begin()+pos);
            }else
            {
                cout<<"Exclusao nao efetuada"<<endl;
            }
        }
    };

 void FicharioPokemon::consultar()
    {
        
        int pos;
        cout<<"=== CONSULTAR ==="<<endl;
        cout<<"Qual posicao deseja consultar?"<<endl;
        cin>>pos;

        if(pos>pokemons.size())
        {
            cout<<"Posicao invalida"<<endl;

        } else
            {
                
                pokemons[pos].toString();
            }
    };
    void FicharioPokemon::relatorio()
    {
        cout<<"-==RELATORO DE POKEMONS==--"<<endl<<endl;
        
        
        
        for(int pos=0;pos<pokemons.size();pos++)
        {
            
            
                pokemons[pos].toString();
            
                
        }
        
        
    };