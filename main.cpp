#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
    string Alfabeto, Alfabeto_Fita, Estado_Inicial;
    int Num_Estados  ,Num_Transicoes,Tam_Alfabeto,Tam_Alfabeto_Fita;

    cin >> Alfabeto;
    Tam_Alfabeto = Alfabeto.size();
    //cout << "Num_Elementos " << Num_Elementos << endl;

    cin >> Alfabeto_Fita;
    Tam_Alfabeto_Fita = Alfabeto_Fita.size();

    cin >> Num_Estados;
    if(Num_Estados < 1 || Num_Estados >10){
        return 0;
    }

    cin >> Estado_Inicial;
    if(Num_Estados < 1 || Num_Estados >10){
        return 0;
    }

    int Estados_Finais[Num_Estados], Qtd_EstadosF = 0;
    char numero;
    char proxChar;
    int i=0;
    do{
        scanf("%d%c",&Estados_Finais[i],&numero);
        i++;
        Qtd_EstadosF++;
    }while(numero != '\n');


    cin >> Num_Transicoes;
    if(Num_Transicoes < 1 || Num_Transicoes > (Num_Estados * Tam_Alfabeto * Tam_Alfabeto_Fita)){
        return 0;
    }
    getchar();
    string Transicoes[Num_Transicoes];
    for(int i=0;i<Num_Transicoes;i++){
        getline(cin,Transicoes[i]);
        Transicoes[i].erase(std::remove(Transicoes[i].begin(), Transicoes[i].end(), ' '),Transicoes[i].end());
    }

    int Num_Cadeias;
    cin >> Num_Cadeias;
    if( Num_Cadeias < 1 || Num_Cadeias > 100){
        return 0;
    }

    string Testes[Num_Cadeias];
    for(int i=0;i< Num_Cadeias;i++){
        cin >> Testes[i];
    }

    //////////////COMPUTAÇÃO/////////////////////////

    string Estado_Atual;
    int Aceita = 0 , verificador = 0;
    bool acabou = false;

    for(int pos=0;pos<Num_Cadeias;pos++){ // Percorre as cadeias

        cout << Testes[pos] << endl; // Imprime a cadeia original
        Estado_Atual = Estado_Inicial;
        //cout << "Estado_Atual = " << Estado_Atual << endl;
        //cout << " Testes[pos].size() " << Testes[pos].size() << endl;
        Testes[pos].erase(0,1);
        Testes[pos].erase(Testes[pos].size()-1,Testes[pos].size());
        Testes[pos].insert(0,"$");
        Testes[pos].insert(Testes[pos].size(),"$");

        int i=0;

        while(i < Testes[pos].size()){ // Tamanho da string
            Aceita = 0;
            for(int j=0;j<Num_Transicoes;j++){
                /*cout << "j = " << j << endl;
                cout << "String lida " << Testes[pos].at(i) << endl;
                cout << "String da transicao " << Transicoes[j].at(1) << endl;
                cout << "Estado Atual " << Estado_Atual << endl;
                cout << "Estado da transicao" << Transicoes[j].at(0) << endl;*/
                if(Testes[pos].at(i) == Transicoes[j].at(1) && Estado_Atual.at(0) == Transicoes[j].at(0)){
                        Aceita++;
                        //cout << "Aceita dentro = " << Aceita << endl;
                        Estado_Atual = Transicoes[j].at(4);
                        Testes[pos].at(i) = Transicoes[j].at(2);
                        if(Transicoes[j].at(3) == 'R'){
                            i++;
                        }else{
                            i--;
                            //cout << "voltou" << endl;
                        }
                        //system("pause");
                        verificador ++;
                        break;
                }
                //cout << "Aceita fora = " << Aceita << endl;
                //system("pause");
                verificador++;
            }
            if(Aceita == 0){
                break;
            }

        }
        //cout << "Saiu" << endl;
        //system("pause");
        //cout << "Testes[pos].at(Testes[pos].size()  -1) "  << Testes[pos].at(Testes[pos].size()  -1) << endl;
        int value = atoi(Estado_Atual.c_str());
        //cout << "Estado Atual " << value << endl;
            for(int j=0;j<Qtd_EstadosF;j++){
                    //cout << "Estados_Finais " << Estados_Finais[j] << endl;
                if(Testes[pos].at(Testes[pos].size()  -1) == '$' && value  == Estados_Finais[j] /*&& Aceita == Testes[pos].size()*/){
                    acabou = true;
                    //cout << "Entro " << endl;
                    break;
                }
            }
            Testes[pos].erase(0,1);
            Testes[pos].erase(Testes[pos].size()-1,Testes[pos].size());
            Testes[pos].insert(0,"@");
            Testes[pos].insert(Testes[pos].size(),"@");
            cout << Testes[pos] << endl;
            if( acabou == true ){
                cout << "S" << endl;
            }else{
                cout << "N" << endl;
            }
            //system("pause");
            acabou = false;
            Aceita = 0;
            verificador = 0;
            i=0;
    }



    return 0;
}
