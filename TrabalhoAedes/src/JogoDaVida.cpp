#include "JogoDaVida.h"
#include <iostream>
#include <fstream>
#include <vector>

void JogoDaVida::LerMatriz()
{
    ifstream arqr(arq);
    if (arqr.is_open())
    {
        arqr >> tamanho;
        if (tamanho < 5)
        {
            cout << "Matriz muito pequena (min 5x5)" << endl;
        }
        else
        {
            matriz.resize(tamanho, vector<int>(tamanho));
            for (int i = 0; i < tamanho; i++)
            {
                for (int j = 0; j < tamanho; j++)
                {
                    arqr >> matriz[i][j];
                }
            }
            ofstream arqw(arqsaida, ios::app);
            cout << "Montando a matriz..." << endl;
            arqw << "MATRIZ INICIAL:" << endl;
            if (arqw.is_open())
            {
                for (int i = 0; i < tamanho; i++)
                {
                    arqw << "|";
                    for (int j = 0; j < tamanho; j++)
                    {
                        arqw << matriz[i][j] << " ";
                    }
                    arqw << "|";
                    arqw << "\n";
                }
                arqw << "-------------------------------" << endl;
                arqw.close();
            }
            else
            {
                cout << "Erro ao Abrir o arquivo de saida";
            }
        }
    }
    else
    {
        cout << "O arquivo não conseguiu ser aberto" << endl;
    }
    arqr.close();
}

void JogoDaVida::AlterarMatriz(int quantidade)
{
    int vezes = 0;
    cout << "Realizando Gerações..." << endl;
    while (vezes != quantidade)
    {
        vector<vector<int>> proximaGeracao(matriz);
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < tamanho; j++)
            {
                int contvivos = 0;
                int contmortos = 0;

                if (i + 1 < tamanho && matriz[i + 1][j] == 0)
                {
                    contmortos++;
                }
                else
                {
                    contvivos++;
                }
                if (i - 1 >= 0 && matriz[i - 1][j] == 0)
                {
                    contmortos++;
                }
                else
                {
                    contvivos++;
                }
                if (j + 1 < tamanho && matriz[i][j + 1] == 0)
                {
                    contmortos++;
                }
                else
                {
                    contvivos++;
                }
                if (j - 1 >= 0 && matriz[i][j - 1] == 0)
                {
                    contmortos++;
                }
                else
                {
                    contvivos++;
                }
                if(j-1>=0 && i-1>=0 && matriz[i-1][j-1]==0){
                    contmortos++;
                }
                else{
                    contvivos++;
                }
                if(j+1<tamanho && i-1>=0 && matriz[i-1][j+1]==0){
                    contmortos++;
                }
                else{
                    contvivos++;
                }
                if(j-1>=0 && i+1<tamanho && matriz[i+1][j-1]==0){
                    contmortos++;
                }
                else{
                    contvivos++;
                }
                if(j+1<tamanho && i+1<tamanho && matriz[i+1][j+1]==0){
                    contmortos++;
                }
                else{
                    contvivos++;
                }

                if (matriz[i][j] == 1)
                {
                    if (contvivos < 2 || contvivos > 3)
                    {
                        proximaGeracao[i][j] = 0;
                    }
                }
                else if (matriz[i][j] == 0 && contvivos == 3)
                {
                    proximaGeracao[i][j] = 1;
                }
            }
        }
        matriz = proximaGeracao;
        ofstream arqw(arqsaida, ios::app);
        arqw << "Geração " << vezes + 1 << ":" << endl;
        if (arqw.is_open())
        {
            for (int i = 0; i < tamanho; i++)
            {
                arqw << "|";
                for (int j = 0; j < tamanho; j++)
                {
                    arqw << matriz[i][j] << " ";
                }
                arqw << "|";
                arqw << "\n";
            }
            arqw << "-------------------------------" << endl;
            arqw.close();
        }
        else
        {
            cout << "Erro ao Abrir o arquivo de saida";
        }
        vezes++;
    }
    cout << "Fim do processo de Gerações!" << endl;
}

void JogoDaVida::LimparArquivo()
{
    ofstream arqw(arqsaida, ios::trunc);
    if (!arqw.is_open())
    {
        cout << "Erro ao abrir arquivo para limpeza";
    }
    arqw.close();
}

JogoDaVida::JogoDaVida()
{
}

JogoDaVida::~JogoDaVida()
{
}