
/*
 * leds.h
 *
 * Created: 10/09/2022 14:36:07
 *  Author: Leticia
 */

/*-------------------------------------------*/
/*----------------- DEFINES -----------------*/
/*-------------------------------------------*/
#ifndef LEDS_H
#define LEDS_H
// Configura��es dos LEDS
#define LED1_PIO            PIOA
#define LED1_PIO_ID         ID_PIOA
#define LED1_PIO_IDX        0
#define LED1_PIO_IDX_MASK  (1 << LED1_PIO_IDX)

#define LED2_PIO            PIOC
#define LED2_PIO_ID         ID_PIOC
#define LED2_PIO_IDX        30
#define LED2_PIO_IDX_MASK  (1 << LED2_PIO_IDX)

#define LED3_PIO            PIOB
#define LED3_PIO_ID         ID_PIOB
#define LED3_PIO_IDX        2
#define LED3_PIO_IDX_MASK  (1 << LED3_PIO_IDX) 

/*-------------------------------------------*/
/*--------------- PROT�TIPOS ----------------*/
/*-------------------------------------------*/

// P�em 0 no PINO do LED
void set_led1();
void set_led2();
void set_led3();

// P�em 1 no PINO do LED
void clear_led1();
void clear_led2();
void clear_led3();

// Fun��o acende leds
void acende_leds(int freq);

// Fun��o apaga leds
void apaga_leds();
#endif