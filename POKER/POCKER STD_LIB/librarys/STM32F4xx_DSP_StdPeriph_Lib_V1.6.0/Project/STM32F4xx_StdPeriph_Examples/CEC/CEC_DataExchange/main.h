/**
  ******************************************************************************
  * @file    CEC/CEC_DataExchange/main.h 
  * @author  MCD Application Team
  * @version V1.6.0
  * @date    04-September-2015
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2015 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"
/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
#define CEC_MAX_PAYLOAD                  16

/* Uncomment the line below if you use the CEC peripheral as a Device 1 */
//#define DEVICE_1   
/* Uncomment the line below if you use the CEC peripheral as a Device 2 */ 
#define DEVICE_2 
#define DEVICE_ADDRESS_1               0x01  /* CEC device 1 address   */
#define DEVICE_ADDRESS_2               0x03  /* CEC device 2 address   */

#define CEC_INITIATOR_LSB_POS         ((uint32_t) 4)
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
