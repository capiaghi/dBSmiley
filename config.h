// ****************************************************************************
/// \file      Conifg.h
///
/// \brief     Configuration of the Board
///
/// \details    
///
/// \author    Christoph Capiaghi
///
/// \version   0.1
///
/// \date      20180119
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
#ifndef __CONFIG_H__
#define __CONFIG_H__

// Include ********************************************************************
#include <SmartLEDShieldV4.h>    // SmartLED Shield V4
#include <SmartMatrix3.h>

// Exported types *************************************************************
/// \brief     Optional description
/// \details   Optional description (more detailed)


//#define     DEBUG                      ( 1 ) // Serial Debug enable
#define     BRIGHTNESS                 ( 255 )
#define     UART_SPEED                 ( 115200 )

#define     RED_DB_LEVEL               ( 90 )
#define     YELLOW_DB_LEVEL            ( 80 )



const uint8_t     ADC_RESOLUTION        = 16;
const uint32_t    ADC_MAX_VALUE         = 65536;
const uint32_t    ADC_MAX_VALUE_2       = 26000;
const uint8_t     ADC_MIN_VALUE         = 0;
const float       ADC_REF_VOLTAGE       = 1.2;
const float       ADCCONST              = (ADC_REF_VOLTAGE / ADC_MAX_VALUE);


// First Poti: x dB to y dB (low level)
// Second Poti: First Poti + Offset
// Values for mapping the ADC values
const uint8_t     MIN_LOW_LEVEL         = 50;   // dB
const uint8_t     MAX_LOW_LEVEL         = 130;  // dB
const uint8_t     MIN_DB_OFFSET         = 10;   // dB
const uint8_t     MAX_DB_OFFSET         = 30;   // dB


const uint8_t     DELAY_TEXT_DISP_S     = 7;    // seconds

const uint8_t     TEXT_OFFSET_LEFT_DB   = 3;    // Pixels



const char        SOFTWARE_VERSION[10]  =   "V1.0";




// Smart Matrix ************************************************************
#define COLOR_DEPTH               24         // known working: 24, 48 - If the sketch uses type `rgb24` directly, COLOR_DEPTH must be 24
const uint8_t kMatrixWidth       = 32;       // known working: 16, 32, 48, 64
const uint8_t kMatrixHeight      = 32;       // known working: 32, 64, 96, 128
const uint8_t kRefreshDepth      = 36;       // known working: 24, 36, 48
const uint8_t kDmaBufferRows     = 4;        // known working: 2-4, use 2 to save memory, more to keep from dropping frames and automatically lowering refresh rate
const uint8_t kPanelType         = SMARTMATRIX_HUB75_32ROW_MOD16SCAN;   // use SMARTMATRIX_HUB75_16ROW_MOD8SCAN for common 16x32 panels
const uint8_t kMatrixOptions     = (SMARTMATRIX_OPTIONS_NONE);      // see http://docs.pixelmatix.com/SmartMatrix for options
const uint8_t kBackgroundLayerOptions = (SM_BACKGROUND_OPTIONS_NONE);

const uint8_t kScrollingLayerOptions   = (SM_SCROLLING_OPTIONS_NONE);
const uint8_t kIndexedLayerOptions     = (SM_INDEXED_OPTIONS_NONE);

// Microphone *************************************************************
const float   CALIBRATION_FACTOR_MIC = 1.0;
const int     defaultScrollOffset    = 0;


// Define Boolean Variable ************************************************************

#ifndef TRUE
   #define TRUE  ( 1 )
#endif
#ifndef FALSE
   #define FALSE ( !TRUE )
#endif



#endif
