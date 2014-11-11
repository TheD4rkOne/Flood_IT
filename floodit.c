/* Import bibliotecas padr�o */
#include <stdio.h>

/* Import arquivos do projeto */
#include "module.h"
#include "option.h"
#include "enum.h"

//**********************************************************************************
//**********  IGOR A. BRAND�O E LEANDRO A. FELICIANO 2014 �
//**********
//**********  PGM: FLOOD IT - ENTIDADE PRINCIPAL
//**********
//**********  DISCIPLINAS:	PTP/ITP
//**********
//**********  VERS�O:	1.0
//**********
//**********  NOV/2014 - Cria��o
//**********
//**********************************************************************************

/* DECLARA��ES EM ESCOPO GLOBAL */
OPCOES opc;
//******************************//

void inicializarJogo()
{
    /* Redimenciona a janela do terminal */
    system("mode con:cols=110 lines=80");

    /* Verificar se existe o arquivo de configura��o */

    /* Gerar o arquivo caso n�o exista */

    /* Carregar a struct de configura��es a partir do arquivo */

    /* Configura��es padr�o do jogo */
    opc.nivel_dificuldade = 2;
    opc.n_jogadas = 25;
    opc.tam_tabuleiro = 14;
    /* ============================ */

    /* Refer�ncia ao enum de cores */
    /*enum CORES cor = VERMELHO;
    printf("%i", cor);*/

    /* Altera a cor do display */
    system("COLOR 0A");

    /* DECLARA��ES EM ESCOPO LOCAL */
	int tabuleiro[opc.tam_tabuleiro][opc.tam_tabuleiro];
	/* ============================ */


    /* Inicializa��o do jogo */

    gerarMenuPrincipal();
    entrarMenu(tabuleiro);
}
