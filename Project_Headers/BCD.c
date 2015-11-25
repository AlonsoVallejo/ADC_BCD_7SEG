	# include "BCD.h"

unsigned int unid, dec, cent; // unidades donde guardan cada numeros que conformen el valor que
							  // que leemos con el ADC.


//**************************************************************************
//					CONVERSION BDC PARA OBTENER VALOR DE LAS UNIDADES
//**************************************************************************

unsigned int BCD_UNID(unsigned short val_adc)
{
	unid = (val_adc % 100) % 10;
	return unid;
}


//************************************************************************
//					CONVERSION BDC PARA OBTENER VALOR DE LAS DECENAS
//************************************************************************

unsigned int BCD_DEC(unsigned short val_adc)
{
	dec = (val_adc % 100) / 10;
	return dec;
}


//************************************************************************
//					CONVERSION BDC PARA OBTENER VALOR DE LAS CENTENAS
//************************************************************************

unsigned int BCD_CENT(unsigned short val_adc)
{
	cent = (val_adc / 100);
	return cent;
}
