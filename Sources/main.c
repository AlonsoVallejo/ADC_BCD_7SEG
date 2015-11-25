/*============================================================================*/
/*                    UNIVERSIDAD DE COLIMA - FIME			                  */
/*============================================================================*/
/*                        OBJECT SPECIFICATION                                */
/*============================================================================*
* C Source:        main.c
* version:         1.0 
* Microntroller:   FRDM-KL25Z
* created_by:      Jose Alonso Vallejo Rios
* date_created:    27 / 03 / 2014
* Place:		   Colima, Mexico.   
*=============================================================================*/
/* DESCRIPTION : Codigo principal que se cargara al micrcontrolador con todas */
/* las funciones ya antes creadas											  */
/*============================================================================*/
/* FUNCTION COMMENT : Programa que lee un valor analogico con el ADC de 8 bits*/
/*  del micronctrolador, y una vez leido convierte el valor de binario a BCD  */                                                     
/*  para poder ser visulaizado en 3 displays de anado comun interconectados.  */
/*  La multiplexacion se hace mediante codigo fuente.                         */
/*============================================================================*/

#include "main.h"

unsigned int val_unid, val_dec, val_cent; // variables donde se guardaran los valores de cada digito del ADC de forma separada.
unsigned short valor_adc; // variable donde se guarda el valor que lee el ADC.

int main(void)
{	
	init_gpio(); // funcion para inicializar los GPIO.
	init_adc(Eight); // funcion para inicializar el ADC a la resolucion que se quiera(Eight, Ten, Twelve, Sixteen )
	
	for(;;) 
	
	{	
		valor_adc = ADC_READ(PTB0); // leemos valor del ADC y lo guardamos en una variable.
		
		val_unid  = BCD_UNID(valor_adc); // obtenemos el valor de las unidades del valor del ADC.
		val_dec   = BCD_DEC(valor_adc);  // obtenemos el valor de las decenas del valor del ADC.
		val_cent  = BCD_CENT(valor_adc);  // obtenemos el valor de las centenas del valor del ADC.
		
		segments_off(); // apagamos todos los segmentos de los displays.
		selec_Digit(1); // Encendemos solamente el display de las unidades. 
		digit_number(val_unid); // Imprimimos el valor de las unidades del ADC.
		retardo(); //Se hace un pequeño retardo para que se aprecie mas el valor impreso.
		
		segments_off(); 
		selec_Digit(2); // Encendemos solamente el display de las decenas.
		digit_number(val_dec);// Imprimimos el valor de las decenas del ADC.
		retardo();
		
		segments_off();
		selec_Digit(3); // Encendemos solamente el display de las centenas.
		digit_number(val_cent); // Imprimimos el valor de las decenas del ADC.
		retardo();
		
		segments_off();
	}
}
