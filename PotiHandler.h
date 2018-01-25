// ****************************************************************************
/// \file      Potihandler.h
///
/// \brief     
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
/// \warning   
///
/// \todo     
///

// Define to prevent recursive inclusion
#ifndef __POTIHANDLER_H__
#define __POTIHANDLER_H__

// Include ********************************************************************
#include "Arduino.h"
#include "PinMapping.h"
#include "config.h"
#include <ADC.h>

// Exported types *************************************************************
/// \brief     Optional description
/// \details   Optional description (more detailed)


// Exported constants *********************************************************

// Exported macros ************************************************************

// Exported functions *********************************************************
void        initPotis();
uint32_t    readLowerPoti();
uint32_t    readUpperPoti();

#endif
