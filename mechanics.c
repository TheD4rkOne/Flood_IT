#include <stdio.h>

//**********************************************************************************
//**********  IGOR A. BRAND�O E LEANDRO A. FELICIANO 2014 �
//**********
//**********  PGM: FLOOD IT - MEC�NICA DO JOGO
//**********
//**********  DISCIPLINAS:	PTP/ITP
//**********
//**********  VERS�O:	1.0
//**********
//**********  NOV/2014 - Cria��o
//**********
//**********************************************************************************

void percorreMatriz(int linha_, int coluna_,int matriz_[][14],int corAntiga_, int corNova_, int ordem_matriz_)
{
    //O primeiro teste � se a posi��o (0,0) == corAntiga e entra na decis�o.
    if (matriz_[linha_][coluna_] == corAntiga_)
    {
        /* --- TRATAMENTO DOS CASOS --- */

		/* a posi��o atual linha e coluna � atualizada para a cor digitada pelo usu�rio. */
		matriz_[linha_][coluna_] = corNova_;

        /*
		 * testa se a linha n�o � a ultima, caso verdadeiro e a linha+1, (linha de baixo), for igual a cor antiga chama a fun��o recursivamente com
		 * os linha+1 e coluna como parametros.
		 */
		if (linha_ < ordem_matriz_-1 && matriz_[linha_ + 1][coluna_] == corAntiga_)
            percorreMatriz(linha_ + 1, coluna_, matriz_, corAntiga_, corNova_, ordem_matriz_);

		/*
		 * testa se a coluna n�o � a ultima, caso verdadeiro e a coluna + 1 (coluna da direita) for igual a cor antiga,
		 * chama a fun��o recursivamente passando o valor da linha e da coluna+1 como paramentros.
		 */
		if (coluna_ < ordem_matriz_-1 && matriz_[linha_][coluna_ + 1] == corAntiga_)
            percorreMatriz(linha_, coluna_ + 1, matriz_, corAntiga_ , corNova_ , ordem_matriz_);

		/*
		 * testa se a linha n�o � a primeira, caso verdadeiro  e se a celula da linha-1,(linha de cima), � igual a cor antiga,
		 * chama a fun��o recursivamente atribuindo @param linha_- 1 e @param coluna_.
		 */
        if (linha_ > 0 && matriz_[linha_ - 1][coluna_] == corAntiga_)
            percorreMatriz(linha_ - 1, coluna_, matriz_, corAntiga_ , corNova_ , ordem_matriz_ );


		/*
		 * testa se a coluna n�o � a primeira, caso verdadeiro e se a coluna_-1, (coluna a esquerda), for igual a cor antiga,
         * chama a fun��o recursivamente atribuindo @param linha_ e @param coluna_- 1.
		 */
        if (coluna_ > 0 && matriz_[linha_][coluna_ - 1] == corAntiga_)
            percorreMatriz(linha_, coluna_ - 1, matriz_, corAntiga_ , corNova_ , ordem_matriz_ );
    }

}



