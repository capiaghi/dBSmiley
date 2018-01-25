// ****************************************************************************
/// \file      Potihandler.cpp
///
/// \brief     Init and read out ADC
///
/// \details   
///
/// \author    Christoph Capiaghi
///
/// \version   0.1
///
/// \date      20180124
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
/// \warning  See, whitch adc https://forum.pjrc.com/threads/25532-ADC-library-update-now-with-support-for-Teensy-3-1
///
/// \todo     
///
// ****************************************************************************
// Includes *******************************************************************
#include "Potihandler.h"

// Private constants **********************************************************
int32_t lowerPoti = 0;
int32_t upperPoti = 0;

ADC *adc = new ADC(); // adc object

// ----------------------------------------------------------------------------
/// \brief     Initialize buttosn
/// \detail    Turn on Pull-ups, define as input
/// \warning   
/// \return    void
/// \todo      
///
void initPotis()
{
   pinMode(UPPER_POTI_PIN, INPUT);
   pinMode(LOWER_POTI_PIN, INPUT);
   
   if (adc->adc1->checkPin(UPPER_POTI_PIN) == true )
   {
      Serial.println("UPPER_POTI_PIN okay");
   }
   else
   {
      Serial.println("UPPER_POTI_PIN NOT okay");
   }
   
   if (adc->adc1->checkPin(LOWER_POTI_PIN) == true )
   {
      Serial.println("LOWER_POTI_PIN okay");
   }
   else
   {
      Serial.println("LOWER_POTI_PIN NOT okay");
   }
   
   adc->setAveraging(64, ADC_1); // set number of averages
   adc->setResolution(ADC_RESOLUTION, ADC_1); // set bits of resolution
   adc->setConversionSpeed(ADC_CONVERSION_SPEED::VERY_LOW_SPEED, ADC_1); // change the conversion speed
   adc->setSamplingSpeed(ADC_SAMPLING_SPEED::VERY_LOW_SPEED, ADC_1); // change the sampling speed
   adc->setReference(ADC_REFERENCE::REF_1V2, ADC_1); // AudioInputAnalog is holding the Reference to 1.2V it is not changable

}


// ----------------------------------------------------------------------------
/// \brief     Get state of Button Enter
/// \detail    Gets the state of the button and resets the flag
/// \warning   
/// \return    state: 1 pressed, 0 not pressed
/// \todo      
///
uint32_t readUpperPoti()
{
   upperPoti = adc->adc1->analogRead(UPPER_POTI_PIN); // read a new value, will return ADC_ERROR_VALUE if the comparison is false.

   #ifdef DEBUG
      Serial.print(F("Upper Poti ADC: "));
      Serial.println(upperPoti); 
   #endif
   return upperPoti; 
}

uint32_t readLowerPoti()
{
   lowerPoti = adc->adc1->analogRead(LOWER_POTI_PIN); // read a new value, will return ADC_ERROR_VALUE if the comparison is false.
   
   #ifdef DEBUG
      Serial.print(F("Lower Poti ADC: "));
      Serial.println(lowerPoti);
   #endif
   
   return lowerPoti;
}
