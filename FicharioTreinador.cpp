#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using std::find;
using std::cout;
using std::cin;
using std::endl;
#include "FicharioTreinador.h"
#include "Treinador.h"


FicharioTreinador::FicharioTreinador(vector <Treinador> treinadores){
        this->treinadores = treinadores;
        
}

void FicharioTreinador::cadastrar()
{
        
    string nome, telefone, registro, cpf, codigo;
    

        

                cout << " === Cadastrar TREINADOR ==== " << endl;
                cout << "\nRegistro: ";
                cin >> registro;
                cout << "\nCPF: ";
                cin >> cpf;
                cout << "\nNome: ";
                cin >> nome;
                cout << "\nTelefone: ";
                cin >> telefone;
                cout << "\nCodigo: ";
                cin >> codigo;

                Treinador treinador(nome, telefone, registro, cpf, codigo);
  
                auto it = find(treinadores.begin(), treinadores.end(), treinador);
                  if(it != treinadores.end())
                  {
                      cout << "Treinador já cadastrado!"<< endl;
                  }else
                  {
                      treinadores.push_back(treinador);
                  }
                
  }
 void FicharioTreinador::alterar()
    {
        string nome, telefone, cpf, registro, codigo;
        int pos;

        cout<<"--==ALTERAR TREINADOR==--"<<endl;
        cout<<"Qual posicao deseja alterar?"<<endl;
        cin>>pos;

        if(treinadores[pos].getCode()!=0)
        {
            cout<<"Cpf atual: "<<treinadores[pos].getCpf()<<endl;
            cout<<"Digite o novo cpf: ";
            cin>>cpf;
            treinadores[pos].setCpf(cpf);
          
            cout<<"\n\nNome atual: "<<treinadores[pos].getNome()<<endl;
            cout<<"Digite o novo nome: ";
            cin>>nome;
            treinadores[pos].setNome(nome);
          
            cout<<"\n\nTelefone atual: "<<treinadores[pos].getTelefone()<<endl;
            cout<<"Digite o novo telefone: ";
            cin>>telefone;
            treinadores[pos].setTelefone(telefone);
          
            cout<<"\n\nRegistro de treinador atual: "<<treinadores[pos].getRegistro()<<endl;
            cout<<"Digite o novo registro: ";
            cin>>registro;
            treinadores[pos].setRegistro(registro);

            cout<<"\n\nCodigo de treinador atual: "<<treinadores[pos].getCodigo()<<endl;
            cout<<"Digite o novo codigo: ";
            cin>>codigo;
            treinadores[pos].setCodigo(codigo);


        }else
        {
            cout<<"Posicao invalida"<<endl;
        }
    };

void FicharioTreinador::excluir()
    {
        int pos, res;
        
        
        cout<<"--==EXCLUIR TREINADOR==--"<<endl;
        cout<<"Qual posicao deseja excluir?"<<endl;
        cin>>pos;

        
        if(pos>treinadores.size())
        {
           cout<<"Posicao invalida"<<endl;

        }else
        {
             treinadores[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                 treinadores.erase(treinadores.begin()+pos);
            }else
            {
                cout<<"Exclusao nao efetuada"<<endl;
            }
        }
    };

 void FicharioTreinador::consultar()
    {
        
        int pos;
        cout<<"=== CONSULTAR ==="<<endl;
        cout<<"Qual posicao deseja consultar?"<<endl;
        cin>>pos;

        if(pos>treinadores.size())
        {
            cout<<"Posicao invalida"<<endl;

        } else
            {
                
                treinadores[pos].toString();
            }
    };
    void FicharioTreinador::relatorio()
    {
        cout<<"-==RELATORO DE TREINADORES==--"<<endl<<endl;
        
        
        
        for(int pos=0;pos<treinadores.size();pos++)
        {
            
            
                treinadores[pos].toString();
            
                
        }
        
        
    };