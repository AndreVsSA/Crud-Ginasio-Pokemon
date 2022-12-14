#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using std::find;
using std::cout;
using std::cin;
using std::endl;
#include "FicharioLider.h"
#include "LiderGinasio.h"


FicharioLider::FicharioLider(vector <LiderGinasio> lider){
        this->lider = lider;
        
}

void FicharioLider::cadastrar()
{
        
    string nome, telefone, insignia, cpf, tipo;
    

        

                cout << " === Cadastrar LIDER DE GINASIO ==== " << endl;
                cout << "\nInsignia: ";
                cin >> insignia;
                cout << "\nCPF: ";
                cin >> cpf;
                cout << "\nNome: ";
                cin >> nome;
                cout << "\nTelefone: ";
                cin >> telefone;
                cout << "\nTipo: ";
                cin >> tipo;

                LiderGinasio lideres(nome, telefone, insignia, cpf, tipo);
  
                auto it = find(lider.begin(), lider.end(), lideres);
                  if(it != lider.end())
                  {
                      cout << "Lider já cadastrado!"<< endl;
                  }else
                  {
                      lider.push_back(lideres);
                  }
                
  }
 void FicharioLider::alterar()
    {
        string nome, telefone, insignia, cpf, tipo;
        int pos;

        cout<<"--==ALTERAR LIDER DE GINASIO==--"<<endl;
        cout<<"Qual posicao deseja alterar?"<<endl;
        cin>>pos;

        if(lider[pos].getCode()!=0)
        {
            cout<<"Cpf atual: "<<lider[pos].getCpf()<<endl;
            cout<<"Digite o novo cpf: ";
            cin>>cpf;
            lider[pos].setCpf(cpf);
          
            cout<<"\n\nNome atual: "<<lider[pos].getNome()<<endl;
            cout<<"Digite o novo nome: ";
            cin>>nome;
            lider[pos].setNome(nome);
          
            cout<<"\n\nTelefone atual: "<<lider[pos].getTelefone()<<endl;
            cout<<"Digite o novo telefone: ";
            cin>>telefone;
            lider[pos].setTelefone(telefone);
          
            cout<<"\n\nInsignia de lider atual: "<<lider[pos].getInsignia()<<endl;
            cout<<"Digite a nova insignia: ";
            cin>>insignia;
            lider[pos].setInsignia(insignia);

            cout<<"\n\nTipo de lider atual: "<<lider[pos].getTipo()<<endl;
            cout<<"Digite o novo tipo: ";
            cin>>tipo;
            lider[pos].setTipo(tipo);


        }else
        {
            cout<<"Posicao invalida"<<endl;
        }
    };

void FicharioLider::excluir()
    {
        int pos, res;
        
        
        cout<<"--==EXCLUIR LIDER DE GINASIO==--"<<endl;
        cout<<"Qual posicao deseja excluir?"<<endl;
        cin>>pos;

        
        if(pos>lider.size())
        {
           cout<<"Posicao invalida"<<endl;

        }else
        {
             lider[pos].toString();
            cout<<"\nConfirmar a exclusao? (1-sim) e (2-não)"<<endl;
            cin>>res;
            if(res==1)
            {
                 lider.erase(lider.begin()+pos);
            }else
            {
                cout<<"Exclusao nao efetuada"<<endl;
            }
        }
    };

 void FicharioLider::consultar()
    {
        
        int pos;
        cout<<"=== CONSULTAR ==="<<endl;
        cout<<"Qual posicao deseja consultar?"<<endl;
        cin>>pos;

        if(pos>lider.size())
        {
            cout<<"Posicao invalida"<<endl;

        } else
            {
                
                lider[pos].toString();
            }
    };
    void FicharioLider::relatorio()
    {
        cout<<"-==RELATORO DE LIDERES DE GINASIOS==--"<<endl<<endl;
        
        
        
        for(int pos=0;pos<lider.size();pos++)
        {
            
            
                lider[pos].toString();
            
                
        }
        
        
    };