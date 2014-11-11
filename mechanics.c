#include <stdio.h>

//**********************************************************************************
//**********  IGOR A. BRANDÃO E LEANDRO A. FELICIANO 2014 ©
//**********
//**********  PGM: FLOOD IT - MECÂNICA DO JOGO
//**********
//**********  DISCIPLINAS:	PTP/ITP
//**********
//**********  VERSÃO:	1.0
//**********
//**********  NOV/2014 - Criação
//**********
//**********************************************************************************

void percorreMatriz(int linha_, int coluna_,int matriz_[][14],int corAntiga_, int corNova_, int ordem_matriz_)
{
    //O primeiro teste é se a posição (0,0) == corAntiga e entra na decisão.
    if (matriz_[linha_][coluna_] == corAntiga_)
    {
        /* --- TRATAMENTO DOS CASOS --- */

		/* a posição atual linha e coluna é atualizada para a cor digitada pelo usuário. */
		matriz_[linha_][coluna_] = corNova_;

        /*
		 * testa se a linha não é a ultima, caso verdadeiro e a linha+1, (linha de baixo), for igual a cor antiga chama a função recursivamente com
		 * os linha+1 e coluna como parametros.
		 */
		if (linha_ < ordem_matriz_-1 && matriz_[linha_ + 1][coluna_] == corAntiga_)
            percorreMatriz(linha_ + 1, coluna_, matriz_, corAntiga_, corNova_, ordem_matriz_);

		/*
		 * testa se a coluna não é a ultima, caso verdadeiro e a coluna + 1 (coluna da direita) for igual a cor antiga,
		 * chama a função recursivamente passando o valor da linha e da coluna+1 como paramentros.
		 */
		if (coluna_ < ordem_matriz_-1 && matriz_[linha_][coluna_ + 1] == corAntiga_)
            percorreMatriz(linha_, coluna_ + 1, matriz_, corAntiga_ , corNova_ , ordem_matriz_);

		/*
		 * testa se a linha não é a primeira, caso verdadeiro  e se a celula da linha-1,(linha de cima), é igual a cor antiga,
		 * chama a função recursivamente atribuindo @param linha_- 1 e @param coluna_.
		 */
        if (linha_ > 0 && matriz_[linha_ - 1][coluna_] == corAntiga_)
            percorreMatriz(linha_ - 1, coluna_, matriz_, corAntiga_ , corNova_ , ordem_matriz_ );


		/*
		 * testa se a coluna não é a primeira, caso verdadeiro e se a coluna_-1, (coluna a esquerda), for igual a cor antiga,
         * chama a função recursivamente atribuindo @param linha_ e @param coluna_- 1.
		 */
        if (coluna_ > 0 && matriz_[linha_][coluna_ - 1] == corAntiga_)
            percorreMatriz(linha_, coluna_ - 1, matriz_, corAntiga_ , corNova_ , ordem_matriz_ );
    }

}



