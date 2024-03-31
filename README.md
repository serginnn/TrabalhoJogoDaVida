# Jogo Da Vida

<p> </p>
<p> </p>

<p align="justify">
	O Jogo Da Vida é um jogo no qual o tabuleiro é baseado em uma matriz quadrada de tamanho minimo 5x5, onde ao executar o programa apenas uma pergunta é feita: "Quantas gerações?". A resposta dessa pergunta determinara quantas execuções serão realizadas encima da matriz inicial inserida pelo usuario junto com o tamanho da mesma, no arquivo denominado "input.mps". E sua saída sera realizada no arquivo "geracoes.mps" que ira imprimir a matriz inicial e todas as matrizes subsequentes.
</p>

<p align="center">
<img src="imagens/input.png"/> 
</p>

<p align="justify">
	Nessa Figura 1 é possivel ver como seria a entrada correta do programa.
</p>

<p align="center">
<img src="imagens/output.png"/> 
</p>

<p align="justify">
	Nessa Figura 2 é possivel ver como seria a saida para a entrada da matriz da primiera figura.
</p>

# Regras
<p align="justify">
	As Regras do jogo são:<br/>
	- Uma célula viva com menos de dois vizinhos vivos morre (solidão).<br/>
	- Uma célula viva com mais de três vizinhos vivos morre (superpopulação).<br/>
	- Uma célula viva com dois ou três vizinhos vivos sobrevive.<br/>
	- Uma célula morta com exatamente três vizinhos vivos se torna viva (reprodução).<br/>

	Sendo que os vizinhos são considerados todas as casas ao redor da célula, inclusive na sua diagonal.
</p>

<p align="center">
<img src="imagens/FuncionamentoJogo.png"/> 
</p>

<p align="justify">
	Nessa Figura 3 é possivel se ter uma ideia de como o jogo funciona.
</p>



# Compilação e Execução

Para a compilação e execução do programa foi utilizado um MakeFile. O qual segue esses procedimentos:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |





