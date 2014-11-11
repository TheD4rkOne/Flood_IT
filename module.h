//**********************************************************************************
//**********  IGOR A. BRAND�O E LEANDRO A. FELICIANO 2014 �
//**********
//**********  PGM: FLOOD IT - MODULARIZA��O DO PROJETO
//**********
//**********  DISCIPLINAS:	PTP/ITP
//**********
//**********  VERS�O:	1.0
//**********
//**********  NOV/2014 - Cria��o
//**********
//**********************************************************************************

/* floodit.c */
void inicializarJogo();

/* init.c */
void inicializarTabuleiro( int **matriz_, int ordem_matriz_ );
void imprimirTabuleiro( int **matriz_, int ordem_matriz_ );
void gerarMenuPrincipal();
void gerarMenuJogo();
void imprimirCabecalho();
void imprimirRodape();
void jogar();
void imprimeCreditos();

/* input.c */
int entrarJogada( int matriz_[][14]);
void entrarMenu( int matriz_[][14] );

/* main.c */
int entrarJogada();
void entrarMenu( int matriz_[][14] );

/* functions.c */
void limparConsole();

/* mechanics.c */
void percorreMatriz(int linha_, int coluna_,int matriz_[][14],int corAntiga_, int corNova_, int ordem_matriz_);
