#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using std::vector;
using std::find;
using std::cout;
using std::cin;
using std::endl;
#include "Treinador.h"
#include "FicharioTreinador.h"
#include "LiderGinasio.h"
#include "FicharioLider.h"
#include "Pokemon.h"
#include "FicharioPokemon.h"
int Treinador::indice=0;
int LiderGinasio::indice=0;
int Pokemon::indice=0;

int main() {
        vector<Treinador> treinadores; 
        vector<LiderGinasio> lider;
        vector<Pokemon> pokemons;
        
        FicharioTreinador ficharioTreinador(treinadores);
        FicharioLider ficharioLider(lider);
        FicharioPokemon ficharioPokemon(pokemons);

    int operacaoGeral, opCadastroTreinador, opCadastroLider, opCadastroPokemon;
        do {
            cout << " === GINASIO POKEMON === " << endl;
            cout << "1 - Treinador " << endl;
            cout << "2 - Lider " << endl;
            cout << "3 - Pokemon " << endl;
            cout << "0 - Sair " << endl;
            cin >> operacaoGeral;

      
               switch (operacaoGeral){
                case 1: 
                    do {
                        cout << " === TREINADOR === " << endl;
                        cout << "1 - Cadastrar Treinador " << endl;
                        cout << "2 - Alterar Treinador " << endl;
                        cout << "3 - Excluir Treinador " << endl;
                        cout << "4 - Consultar Treinador " << endl;
                        cout << "5 - Relatório do Treinador " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >> opCadastroTreinador;

                        switch (opCadastroTreinador) {
                            case 1:
                                ficharioTreinador.cadastrar();
                                break;
                                
                            case 2:
                                ficharioTreinador.alterar();
                                break;
                            case 3:
                                ficharioTreinador.excluir();
                                break;
                                
                            case 4:
                                ficharioTreinador.consultar();
                                break;
                                
                            case 5:
                                ficharioTreinador.relatorio();
                                break;
                            default:
                                if (opCadastroTreinador != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }

                    } while (opCadastroTreinador != 0);

                    break; 
                    
                case 2:
                    do {
                        cout << " === LIDER DE GINASIO === " << endl;
                        cout << "1 - Cadastrar Lider " << endl;
                        cout << "2 - Alterar Lider " << endl;
                        cout << "3 - Excluir Lider " << endl;
                        cout << "4 - Consultar Lider " << endl;
                        cout << "5 - Relatório do Lider " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >>  opCadastroLider;
                        switch (opCadastroLider) {
                            case 1:
                                ficharioLider.cadastrar();
                                break;
                            case 2:
                                ficharioLider.alterar();
                                break;
                            case 3:
                                ficharioLider.excluir();
                                break;
                            case 4:
                                ficharioLider.consultar();
                                break;
                            case 5:
                                ficharioLider.relatorio();
                                break;
                            default:
                                if (opCadastroLider != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }
                    } while (opCadastroLider != 0);
                    break; 
                case 3: 
                    do {
                        cout << " === POKEMON === " << endl;
                        cout << "1 - Cadastrar Pokemon " << endl;
                        cout << "2 - Alterar Pokemon " << endl;
                        cout << "3 - Excluir Pokemon " << endl;
                        cout << "4 - Consultar Pokemon " << endl;
                        cout << "5 - Relatório da Pokemon " << endl;
                        cout << "0 - Voltar ao menu principal" << endl;
                        cout << "Opção: ";
                        cin >>  opCadastroPokemon;
                        switch (opCadastroPokemon) {
                            case 1:
                                ficharioPokemon.cadastrar();
                                break;
                            case 2:
                                ficharioPokemon.alterar();
                                break;
                            case 3:
                                ficharioPokemon.excluir();
                                break;
                            case 4:
                                ficharioPokemon.consultar();
                                break;
                            case 5:
                                ficharioPokemon.relatorio();
                                break;
                            default:
                                if (opCadastroPokemon != 0) {
                                    cout << "Opção inválida." << endl;
                                }
                        }
                    } while (opCadastroPokemon != 0);
                    break; 
                
                    
                default:
                    if (operacaoGeral != 0) {
                        cout << "Opção inválida." << endl;
                    }
            }
        } while ( operacaoGeral != 0);


    return 0; // indica terminação bem-sucedida
}