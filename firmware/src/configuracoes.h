
/*
 * configuracoes.h
 *
 * Created: 31/08/2022 17:27:36
 *  Author: Leticia
 */ 


/*-------------------------------------------*/
/*----------------- DEFINES -----------------*/
/*-------------------------------------------*/

// Bot�o de INICIO
#define INIT_PIO		PIOA
#define INIT_PIO_ID		ID_PIOA
#define INIT_PIO_IDX	19
#define INIT_PIO_IDX_MASK	(1 << INIT_PIO_IDX)

// Bot�o de START
#define START_PIO		PIOD
#define START_PIO_ID	ID_PIOD
#define START_PIO_IDX	28
#define START_PIO_IDX_MASK	(1 << START_PIO_IDX)

// Bot�o SELECT
#define SELECT_PIO		PIOC
#define SELECT_PIO_ID	ID_PIOC
#define SELECT_PIO_IDX	31
#define SELECT_PIO_IDX_MASK (1 << SELECT_PIO_IDX)

/*-------------------------------------------*/
/*---------------- PROT�TIPOS ---------------*/
/*-------------------------------------------*/

// Fun��o de configura��o dos pinos
void io_init();

// Retorna status do bot�o START (1/0)
int get_startstop();

// Retorna status do bot�o SELECAO (1/0)
int get_selecao();

// Botao de tela de inicio (But3)
int get_init();

//  Anima��o de inicio
void anima_init();

// Fun��o tela de inicio
void tela_inicio();

