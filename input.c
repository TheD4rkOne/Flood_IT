/* Import bibliotecas padrão */
#include <stdio.h>

//**********************************************************************************
//**********  IGOR A. BRANDÃO E LEANDRO A. FELICIANO 2014 ©
//**********
//**********  PGM: FLOOD IT - ENTRADA DE DADOS
//**********
//**********  DISCIPLINAS:	PTP/ITP
//**********
//**********  VERSÃO:	1.0
//**********
//**********  NOV/2014 - Criação
//**********
//**********************************************************************************

// Tratamento da jogada do usuário
int entrarJogada( int matriz_[][14])
{
    // Declarações no escopo local
    char escolha = "";
    int numJogadas = 0;

    do
    {
        printf("Sua escolha: ");

        // Entrada de dados
        scanf("%c", &escolha);

        // Valida se a entrada é válida
        switch ( escolha )
        {
            // Encerrar o jogo
            case 'q': printf("\nFinalizando...\n\n"); return 0; break;
            // Salvar partida
            case 's': ""; break;
            // Carregar partida
            case 'o': jogar(matriz_,opc.tam_tabuleiro,numJogadas); break;
            // Voltar ao menu principal
            case 'v': limparConsole(); gerarMenuPrincipal(); entrarMenu(matriz_); break;
            // Opção inválida
            default: escolha = 99; printf("Opcao invalida!\n\n"); break;
        }
    } while ( escolha == 99 );
}

// Tratamento da escolha da opção no menu principal
void entrarMenu( int matriz_[][14] )
{
    // Declarações no escopo local
    int escolha = 0;

    do
    {
        printf("Sua escolha: ");

        // Entrada de dados
        scanf("%i", &escolha);

        // Valida se a entrada é válida
        switch ( escolha )
        {
            // Encerrar o jogo
            case 0:
                printf("\nFinalizando...\n\n"); return 0; break;
            // Novo o jogo
            case 1:
                limparConsole();
                inicializarTabuleiro(matriz_, opc.tam_tabuleiro);
                imprimirTabuleiro(matriz_, opc.tam_tabuleiro);
                entrarJogada(matriz_);
                break;
            case 3:
                limparConsole();
                imprimeCreditos();
                break;
            // Opção inválida
            default: escolha = 99; printf("Opcao invalida!\n\n"); break;
        }
    } while ( escolha == 99 );
}
