#ifndef DISPLAYS_SEG_H_
#define DISPLAYS_SEG_H_

#include "derivative.h"
#include "GPIO.h"
#include "BCD.h"

void selec_Digit(unsigned int);
void digit_number(unsigned int);

//******************************************************************************
//					DEFINIMOS LOS VALORES QUE SE PUEDEN MOSTRAR EN LOS DISPLAYS
//******************************************************************************

#define zero  (0x40) // numero 0
#define one   (0x79) // numero 1
#define two   (0x24) // numero 2
#define three (0x30) // numero 3
#define four  (0x19) // numero 4
#define five  (0x12) // numero 5
#define six   (0x2)  // numero 6
#define seven (0x78) // numero 7
#define eight (0x0)  // numero 8
#define nine  (0x18) // numero 9



#endif /* DISPLAYS_SEG_H_ */
