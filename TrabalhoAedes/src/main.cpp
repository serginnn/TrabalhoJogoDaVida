#include <iostream>
#include <fstream>
#include "JogoDaVida.h"
    using namespace std;
    int main(){
        int quantidade;
        JogoDaVida jogo;
        cout<<"Quantas geraçoes?"<<endl;
        cin>> quantidade;
        jogo.LimparArquivo();
        jogo.LerMatriz();
        jogo.AlterarMatriz(quantidade);
        return 0;
    }