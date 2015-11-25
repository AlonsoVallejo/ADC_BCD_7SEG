#include "GPIO.h"

//**************************************************
//					GPIO DRIVER
//**************************************************

void init_gpio (void)
{
	SIM_SCGC5 |= SIM_SCGC5_PORTC_MASK | SIM_SCGC5_PORTD_MASK ; 
	
	// CONFIGURA LOS PINES NECESARIOS DEL PUERTO C Y D COMO GPIO Y SE ASIGNAS A CIERTOS PINES DEL DISPLAY
	PORTC_PCR0   |= PORT_PCR_MUX(1); // PTC0 - SEG A
	PORTC_PCR1   |= PORT_PCR_MUX(1); // PTC1 - SEG B
	PORTC_PCR2   |= PORT_PCR_MUX(1); // PTC2 - SEG C
	PORTC_PCR3   |= PORT_PCR_MUX(1); // PTC3 - SEG D
	PORTC_PCR4   |= PORT_PCR_MUX(1); // PTC4 - SEG E
	PORTC_PCR5   |= PORT_PCR_MUX(1); // PTC5 - SEG F
	PORTC_PCR6   |= PORT_PCR_MUX(1); // PTC6 - SEG G
	PORTD_PCR0   |= PORT_PCR_MUX(1); // PTD0 - ENABLE DIG 1 (CENTENAS) 
	PORTD_PCR1   |= PORT_PCR_MUX(1); // PTD1 - ENABLE DIG 2 (DECENAS)
	PORTD_PCR2   |= PORT_PCR_MUX(1); // PTD2 - ENABLE DIG 3 (UNIDADES)
	
	GPIOC_PDDR = 0XFF; // CONFIGURAMOS LOS PINES 0 - 9 DEL PUERTO C COMO SALIDA.
	GPIOD_PDDR = 0X7; //  CONFIGURAMOS LOS PINES 0 - 2 DEL PUERTO D COMO SALIDA.
}

//****************************************************************
//			FUNCION PARA APAGAR LOS SEGMENTOS DE LOS DISPLAYS
//****************************************************************

void segments_off (void)
{
	GPIOC_PSOR = 0X7F;// INDICAMOS QUE LOS SEGMENTOS DE LOS SEGMENTOS  
					  // DE LOS DISPLAYS ESTEN APAGADOS INICIALMENTE
}

//****************************************************************
//			FUNCION PARA ENSENDER LOS DISPLAYS
//****************************************************************

void displays_on (void)
{
	GPIOD_PSOR = 0X7;//INDICAMOS QUE LOS DISPLAYS ESTEN ENCENDIDOS
}

//****************************************************************
//			FUNCION PARA APAGAR LOS DISPLAYS
//****************************************************************

void displays_off (void)
{
	GPIOD_PCOR = 0X7;//INDICAMOS QUE LOS DISPLAYS ESTEN APAGADOS
}

//***********************************************************
//			FUNCION PARA RETARDO EN MILISEGUNDOS
//***********************************************************

void retardo (void)
{
	int max_cont;
	 for(max_cont = 0; max_cont <= 1500000; max_cont++)
	{}
		
}
