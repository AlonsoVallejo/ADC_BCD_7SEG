#include "DISPLAYS_SEG.h"

//*****************************************************************************
//			FUNCION PARA SELECCIONAR EL DISPLAYS QUE QUERAMOS ACTIVAR.
//*****************************************************************************

void selec_Digit(unsigned int digit)
{
	switch(digit)
	{
	case 1: 
		GPIOD_PDOR = 0X4; // Encendemos el display de las unidades y apagamos los demas.
		break;
	case 2:
		GPIOD_PDOR = 0X2; // Encendemos el display de las decenas y apagamos los demas.
		break;
	case 3:
		GPIOD_PDOR = 0X1; // Encendemos el display de las centenas y apagamos los demas.
		break;
	default:
		GPIOD_PDOR = 0X0; // Se apagan todos los displays.
	}
			
}

//*******************************************************
//		 FUNCION PARA IMPRIMIR UN NUMERO EL LOS DISPLAYS
//*******************************************************

void digit_number(unsigned int number)
{
	switch(number)
	{
	case 0:
			GPIOC_PDOR = zero; // SE PONE UN CERO EN LOS DISPLAYS
			break;
	case 1:
			GPIOC_PDOR = one; // SE PONE UN 1 EN LOS DISPLAYS
			break;
	case 2:
			GPIOC_PDOR = two; // SE PONE UN 2 EN LOS DISPLAYS
			break;
	case 3:
			GPIOC_PDOR = three; // SE PONE UN 3 EN LOS DISPLAYS
			break;
	case 4:
			GPIOC_PDOR = four; // SE PONE UN 4 EN LOS DISPLAYS
			break;
	case 5:
			GPIOC_PDOR = five; // SE PONE UN 5 EN LOS DISPLAYS
			break;
	case 6:
			GPIOC_PDOR = six; // SE PONE UN 6 EN LOS DISPLAYS
			break;
	case 7:
			GPIOC_PDOR = seven; // SE PONE UN 7 EN LOS DISPLAYS
			break;
	case 8:
			GPIOC_PDOR = eight; // SE PONE UN 8 EN LOS DISPLAYS
			break;
	case 9:
			GPIOC_PDOR = nine; // SE PONE UN 9 EN LOS DISPLAYS
			break;
	default:
			GPIOC_PDOR = 0XFF; // apagamos los segmentos.
	}
}
