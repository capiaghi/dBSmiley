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

// Exported types *************************************************************
/// \brief     Optional description
/// \details   Optional description (more detailed)


#define     DEBUG                      ( 1 ) // Serial Debug enable
#define     BRIGHTNESS                 ( 255 )
#define     LED_PIN                    ( 13 )
#define     UART_SPEED                 ( 115200 )

#define     RED_DB_LEVEL             ( 90 )
#define     YELLOW_DB_LEVEL          ( 80 )


const char  SOFTWARE_VERSION[10]   =   "V1.0";

// Microphone *************************************************************
const float CALIBRATION_FACTOR_MIC = 1.26;
const int   defaultScrollOffset    = 0;


// Define Boolean Variable ************************************************************

#ifndef TRUE
   #define TRUE  ( 1 )
#endif
#ifndef FALSE
   #define FALSE ( !TRUE )
#endif



#endif
