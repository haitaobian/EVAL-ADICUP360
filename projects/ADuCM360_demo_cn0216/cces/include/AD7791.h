/**
******************************************************************************
*   @file     AD7791.h
*   @brief    Header file for AD7791
*   @version  V0.1
*   @author   ADI
*   @date     November 2015
*   @par Revision History:
*  - V0.1, November 2015: initial version.
*
*******************************************************************************
* Copyright 2015(c) Analog Devices, Inc.
*
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without modification,
* are permitted provided that the following conditions are met:
*  - Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*  - Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*  - Neither the name of Analog Devices, Inc. nor the names of its
*    contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*  - The use of this software may or may not infringe the patent rights
*    of one or more patent holders.  This license does not release you
*    from the requirement that you obtain separate licenses from these
*    patent holders to use this software.
*  - Use of the software either in source or binary form, must be run
*    on or directly connected to an Analog Devices Inc. component.
*
* THIS SOFTWARE IS PROVIDED BY ANALOG DEVICES "AS IS" AND ANY EXPRESS OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, NON-INFRINGEMENT, MERCHANTABILITY
* AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
* IN NO EVENT SHALL ANALOG DEVICES BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
* INTELLECTUAL PROPERTY RIGHTS, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*********************************************************************************/


#ifndef AD7791_H_
#define AD7791_H_


/*************************** Functions prototypes *****************************/

extern void AD7791_Init (void);
extern void AD7791_Reset (void);
extern uint32_t AD7791_DataScan(void);
extern uint32_t AD7791_RegRead(uint8_t ui8regValue);
extern float AD7791_ConvertToVolts(uint32_t ui32adcValue);


/************************** ADC Definitions ***********************************/

/* ADC Write Commands */
#define COMM_WRITE      0x00          /* Write to the Communications Register*/
#define MODE_WRITE         0x10              /* Write to the Mode Register */
#define FILTER_WRITE    0x20              /* Write to the Filter Register */

/* ADC Read Commands */
#define STATUS_READ        0x08              /* Read from the Status Register */
#define MODE_READ         0x18               /* Read from the Mode Register */
#define FILTER_READ        0x28              /* Read from the Filter Register */
#define DATA_READ         0x38               /* Read from the Data Register */


/**************************** Configuration parameters **********************/
#define VREF   5


#endif /* AD7791_H_ */
