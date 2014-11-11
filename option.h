//**********************************************************************************
//**********  IGOR A. BRANDÃO E LEANDRO A. FELICIANO 2014 ©
//**********
//**********  PGM: FLOOD IT - OPÇÕES DO JOGO
//**********
//**********  DISCIPLINAS:	PTP/ITP
//**********
//**********  VERSÃO:	1.0
//**********
//**********  NOV/2014 - Criação
//**********
//**********************************************************************************

// Struct com as configurações do jogo
typedef struct opcoes
{
    // Atributos de jogabilidade
    int nivel_dificuldade; /* 1- Fácil 2- Médio 3- Difícil  */
    int tam_tabuleiro; /* Tamanho personalizado. Padrão 14 */
    int n_jogadas; /* Padrão 25 */
} OPCOES;

// Struct com as informações do jogo
/*typedef struct game_info
{
    // Informações do jogo
    char nome_jogo[] = "FLOOD IT!";
    float versao_jogo = 1.0;
} GAME_INFO;*/

