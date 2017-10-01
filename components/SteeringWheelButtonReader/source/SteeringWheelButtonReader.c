/*****************************************************************************
* \file      SteeringWheelButtonReader.c
* \author    Conny Gustafsson
* \date      2017-09-04
* \brief     SteeringWheelButtonReader
*
* Copyright (c) 2017 Conny Gustafsson
* Permission is hereby granted, free of charge, to any person obtaining a copy of
* this software and associated documentation files (the "Software"), to deal in
* the Software without restriction, including without limitation the rights to
* use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
* the Software, and to permit persons to whom the Software is furnished to do so,
* subject to the following conditions:

* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
* FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
* COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
* IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
* CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
******************************************************************************/
//////////////////////////////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////////////////////////////
#include "Rte_SteeringWheelButtonReader.h"
#include "bsp_defs.h"

//////////////////////////////////////////////////////////////////////////////
// PRIVATE CONSTANTS AND DATA TYPES
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// PRIVATE FUNCTION PROTOTYPES
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// PUBLIC VARIABLES
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// PRIVATE VARIABLES
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// PUBLIC FUNCTIONS
//////////////////////////////////////////////////////////////////////////////
void SteeringWheelButtonReader_Exit(void)
{

}

void SteeringWheelButtonReader_Init(void)
{
   Rte_Write_SteeringWheelButtonReader_SWS_PushButtonStatus_Back_ButtonStatus(ButtonStatus_NotAvailable);
   Rte_Write_SteeringWheelButtonReader_SWS_PushButtonStatus_Down_ButtonStatus(ButtonStatus_NotAvailable);
   Rte_Write_SteeringWheelButtonReader_SWS_PushButtonStatus_Enter_ButtonStatus(ButtonStatus_NotAvailable);
   Rte_Write_SteeringWheelButtonReader_SWS_PushButtonStatus_Home_ButtonStatus(ButtonStatus_NotAvailable);
   Rte_Write_SteeringWheelButtonReader_SWS_PushButtonStatus_Left_ButtonStatus(ButtonStatus_NotAvailable);
   Rte_Write_SteeringWheelButtonReader_SWS_PushButtonStatus_Right_ButtonStatus(ButtonStatus_NotAvailable);
   Rte_Write_SteeringWheelButtonReader_SWS_PushButtonStatus_Up_ButtonStatus(ButtonStatus_NotAvailable);

}

void SteeringWheelButtonReader_Run(void)
{
   BspApi_DiscreteState_T state;
   Std_ReturnType result;
   //result = Rte_Call_SteeringWheelButtonReader_BspApi_GetDiscreteInput(BSP_DISCRETE_INPUT_ID_SWS_LEFT, &state);
}

//////////////////////////////////////////////////////////////////////////////
// PRIVATE FUNCTIONS
//////////////////////////////////////////////////////////////////////////////


