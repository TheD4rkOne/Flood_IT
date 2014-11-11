/* Import bibliotecas padrão */
#include <stdio.h>

/* Import arquivos do projeto */
#include "module.h"
#include "option.h"
#include "enum.h"

//**********************************************************************************
//**********  IGOR A. BRANDÃO E LEANDRO A. FELICIANO 2014 ©
//**********
//**********  PGM: FLOOD IT - ENTIDADE PRINCIPAL
//**********
//**********  DISCIPLINAS:	PTP/ITP
//**********
//**********  VERSÃO:	1.0
//**********
//**********  NOV/2014 - Criação
//**********
//**********************************************************************************

/* DECLARAÇÕES EM ESCOPO GLOBAL */
OPCOES opc;
//******************************//

void inicializarJogo()
{
    /* Redimenciona a janela do terminal */
    system("mode con:cols=110 lines=80");

    /* Verificar se existe o arquivo de configuração */

    /* Gerar o arquivo caso não exista */

    /* Carregar a struct de configurações a partir do arquivo */

    /* Configurações padrão do jogo */
    opc.nivel_dificuldade = 2;
    opc.n_jogadas = 25;
    opc.tam_tabuleiro = 14;
    /* ============================ */

    /* Referência ao enum de cores */
    /*enum CORES cor = VERMELHO;
    printf("%i", cor);*/

    /* Altera a cor do display */
    system("COLOR 0A");

    /* DECLARAÇÕES EM ESCOPO LOCAL */
	int tabuleiro[opc.tam_tabuleiro][opc.tam_tabuleiro];
	/* ============================ */


    /* Inicialização do jogo */

    gerarMenuPrincipal();
    entrarMenu(tabuleiro);
}
