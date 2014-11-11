/* Import bibliotecas padr�o */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

//**********************************************************************************
//**********  IGOR A. BRAND�O E LEANDRO A. FELICIANO 2014 �
//**********
//**********  PGM: FLOOD IT - INICIALIZA��O DO JOGO
//**********
//**********  DISCIPLINAS:	PTP/ITP
//**********
//**********  VERS�O:	1.0
//**********
//**********  NOV/2014 - Cria��o
//**********
//**********************************************************************************

// Inicializa��o do tabuleiro com valores aleat�rios.
void inicializarTabuleiro( int matriz_[][14], int ordem_matriz_ )
{
    // Declara��es no escopo local
	int i, j;

    // Temporizador para gera��o de n�meros alet�rios
    srand(time(NULL));

    // Prenchimento da matriz com n�meros aleat�rios
	for ( i = 0; i < ordem_matriz_; i++ )
    {
		for ( j = 0; j < ordem_matriz_; j++ )
		{
			matriz_[i][j] = rand() % 6;
		}
	}

}

// Sub-rotina para impress�o do tabuleiro.
void imprimirTabuleiro( int matriz_[][14], int ordem_matriz_ )
{
    // Declara��es no escopo local
	int i, j;
    imprimirCabecalho();

	for ( i = 0; i < ordem_matriz_; i++ )
    {
		for ( j = 0; j < ordem_matriz_; j++ )
		{
			switch(matriz_[i][j]){
                case 0:
                    textbackground(9);
                    textcolor(9);
                    break;
                case 1:
                    textbackground(12);
                    textcolor(12);
                    break;
                case 2:
                    textbackground(10);
                    textcolor(10);
                    break;
                case 3:
                    textbackground(14);
                    textcolor(14);
                    break;
                case 4:
                    textbackground(13);
                    textcolor(13);
                    break;
                case 5:
                    textbackground(5);
                    textcolor(5);
                    break;

            }
			printf("%i ", matriz_[i][j]);
		}
		printf("\n");
	}
	textbackground(0);
	textcolor(15);
    imprimirRodape();
    gerarMenuJogo();
}

// Sub-rotina para gerar o cabe�alho
void imprimirCabecalho()
{
    // Impress�o do cabe�alho
    printf("FLOOD IT!\n");
    printf("=========\n\n");
    printf("============================================\n");
}

// Sub-rotina para gerar o rodape
void imprimirRodape()
{
    // Impress�o do rodap�
    printf("============================================\n\n");
}

// Sub-rotina para gerar o menu principal
void gerarMenuPrincipal()
{
    // Impress�o do menu
    imprimirCabecalho();
    printf("Selecione uma opcao no menu abaixo:\n\n");
    printf("1) Novo jogo\n\n");
    printf("2) Configuracoes\n\n");
    printf("3) Creditos\n\n");
    printf("0) Sair do jogo\n\n");
    imprimirRodape();
}

// Sub-rotina para gerar o menu do jogo
void gerarMenuJogo()
{
    // Impress�o do menu
    printf("\nOPCOES DE JOGADAS:\n");
    printf("====================\n");
    textbackground(9);
    textcolor(15);
    printf(" 0: AZUL ");
    textbackground(12);
    textcolor(15);
    printf(" 1: VERMELHO ");
    textbackground(10);
    textcolor(0);
    printf(" 2: VERDE ");
    textbackground(14);
    textcolor(0);
    printf(" 3: AMARELO ");
    textbackground(13);
    textcolor(15);
    printf(" 4: ROSA ");
    textbackground(5);
    textcolor(15);
    printf(" 5: ROXO \n\n");
    textbackground(0);
    textcolor(10);

    printf("\nOUTRAS OPCOES:\n");
    printf("====================\n");
    printf("q: Interromper o jogo\n\n");
    printf("s: Salvar partida\n\n");
    printf("o: Carregar partida\n\n");
    printf("v: Voltar ao menu principal\n\n");
}

void jogar(int matriz_[][14], int ordem_matriz_, int numJogadas_)
{
    int corUsuario,i=0,j=0;

    limparConsole();
    imprimirTabuleiro(matriz_, ordem_matriz_);

    textbackground(9);
    textcolor(15);
    printf(" 0 ");

    textbackground(0);
    printf(" ");

    textbackground(12);
    textcolor(15);
    printf(" 1 ");

    textbackground(0);
    printf(" ");

    textbackground(10);
    textcolor(0);
    printf(" 2 ");

    textbackground(0);
    printf(" ");

    textbackground(14);
    textcolor(0);
    printf(" 3 ");

    textbackground(0);
    printf(" ");

    textbackground(13);
    textcolor(15);
    printf(" 4 ");

    textbackground(0);
    printf(" ");

    textbackground(5);
    textcolor(15);
    printf(" 5 ");

    textbackground(0);
    textcolor(15);

    printf("\nNumero De Jogadas: %i",numJogadas_);

    printf("\nEscolha a cor desejada: ");
    scanf("%i",&corUsuario);

    while(numJogadas_<25)
    {
        percorreMatriz(i,j,matriz_,matriz_[i][j],corUsuario,ordem_matriz_);
        numJogadas_++;

        jogar(matriz_,ordem_matriz_,numJogadas_);
    }

}

void imprimeCreditos()
{

    printf("\n//******************************************************************************");
    printf("\n//**********  IGOR A. BRANDAO E LEANDRO A. FELICIANO 2014 �");
    printf("\n//**********");
    printf("\n//**********  PGM: FLOOD IT - MAIN");
    printf("\n//**********");
    printf("\n//**********  DISCIPLINAS:	PTP/ITP");
    printf("\n//**********");
    printf("\n//**********  VERSAO:	1.0");
    printf("\n//**********");
    printf("\n//**********  NOV/2014 - Criacao");
    printf("\n//**********");
    printf("\n//******************************************************************************\n\n");
    gerarMenuPrincipal();
    entrarMenu();

}
