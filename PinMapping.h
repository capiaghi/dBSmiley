// ****************************************************************************
/// \file      PinMapping.h
///
/// \brief     Defines Pins of the Board
///
/// \details    
///
/// \author    Christoph Capiaghi
///
/// \version   0.1
///
/// \date      20180120
/// 
/// \copyright Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
/// http://www.apache.org/licenses/LICENSE-2.0
///
/// \pre       
///
/// \bug       
///
/// \warning   
///
/// \todo     
///

// Define to prevent recursive inclusion
#ifndef __PINMAPPING_H__
#define __PINMAPPING_H__

// Include ********************************************************************
#include "Arduino.h"
// Exported types *************************************************************
/// \brief     Optional description
/// \details   Optional description (more detailed)


// Exported constants *********************************************************

// Exported macros ************************************************************
// Mapping according "pins_arduino.h"

// Buttons TBD
#define BUTTON_ENTER_PIN              	   ( 1 )    // Enter
#define LED_PIN                           ( 13 )   // On Board LED

//  If you want to use AudioInputAnalog and the ADC you have to use the ADC_1 module,
// the Audio library uses ADC_0. Any calls to functions that use ADC_0 will most likely crash the program. 
#define UPPER_POTI_PIN                    ( A3 )   // use ADC1
#define LOWER_POTI_PIN                    ( A2 )   // use ADC1

const int MicrophonePin = A1; // use ADC0



// Exported functions *********************************************************

#endif
