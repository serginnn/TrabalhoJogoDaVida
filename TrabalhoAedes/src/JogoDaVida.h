    #ifndef JOGODAVIDA_H
    #define JOGODAVIDA_H 

    #include <string>
    #include <vector>
    using namespace std;

    class JogoDaVida
    {
    private:
        string arq ="datasets/input.mps";
        string arqsaida ="datasets/geracoes.mps";
        int tamanho;
        vector<vector<int>>matriz;
        
    public:
        void LerMatriz();
        void AlterarMatriz(int quantidade);
        void LimparArquivo();
        JogoDaVida();
        ~JogoDaVida();
    };


    #endif
