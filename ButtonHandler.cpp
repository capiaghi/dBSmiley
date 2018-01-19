// ****************************************************************************
/// \file      ButtonHandler.c
///
/// \brief     Sets and returns Button flags
///
/// \details   Button Handler for button up, enter and down
///
/// \author    Christoph Capiaghi
///
/// \version   0.1
///
/// \date      20170509
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
// ****************************************************************************
// Includes *******************************************************************
#include "ButtonHandler.h"

// Private constants **********************************************************
static uint8_t 	buttonStateEnter = HIGH;

// Last button state
static uint8_t 	lastbuttonStateEnter = HIGH;

// Button pressed flag
static uint8_t 	buttonEnterFlag = LOW;
 
// the following variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
// the last time the output pin was toggled
static long 		lastDebounceTimeEnter = 0; 


// ----------------------------------------------------------------------------
/// \brief     Initialize buttosn
/// \detail    Turn on Pull-ups, define as input
/// \warning   
/// \return    void
/// \todo      
///
void initButton()
{
   pinMode(BUTTON_ENTER_PIN, INPUT_PULLUP);
}


// ----------------------------------------------------------------------------
/// \brief     Get state of Button Enter
/// \detail    Gets the state of the button and resets the flag
/// \warning   
/// \return    state: 1 pressed, 0 not pressed
/// \todo      
///
uint8_t getButtonStateEnter()
{
   if(buttonEnterFlag == HIGH)
	{
		buttonEnterFlag = LOW;
		return 1;
	}
	else
	{
		buttonEnterFlag = LOW;
		return 0;
	}
}


void clearButtonAllFlags()
{
  buttonEnterFlag   = LOW;
}

// ----------------------------------------------------------------------------
/// \brief     Updates the flags of the buttons
/// \detail    Sets the flags of the 3 buttons
/// \warning   
/// \return    state: 1 pressed, 0 not pressed
/// \todo      
///
void updateButtonHandler()
{
  // Read out buttons
  int readingEnter   = digitalRead(BUTTON_ENTER_PIN);

  // If the switch changed, due to noise or pressing:
   if (readingEnter != lastbuttonStateEnter) 
   {
      // reset the debouncing timer
      lastDebounceTimeEnter = millis();
   }


   if ((millis() - lastDebounceTimeEnter) > DEBOUNCE_DELAY)
   {
      // whatever the reading is at, it's been there for longer
      // than the debounce delay, so take it as the actual current state:

      // if the button state has changed:
      if (readingEnter != buttonStateEnter)
      {
         buttonStateEnter = readingEnter;

         if (buttonStateEnter == LOW)
         {
            buttonEnterFlag = HIGH;
         }
      }
   }

   lastbuttonStateEnter 	  = readingEnter;
}
