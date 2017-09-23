/******************** (C) COPYRIGHT 2014 ANO Tech ***************************
 * ����		 �������ƴ�
 * �ļ���  ��ANO_Drv_I2C_soft.cpp
 * ����    �����I2C
 * ����    ��www.anotc.com
 * �Ա�    ��anotc.taobao.com
 * ����QȺ ��190169595
**********************************************************************************/


#ifndef __ANO_DRV_I2C_SOFT2_H__
#define __ANO_DRV_I2C_SOFT2_H__

#include "stm32f10x.h"


#define SCL_H         ANO_GPIO_I2C->BSRR = I2C_Pin_SCL
#define SCL_L         ANO_GPIO_I2C->BRR  = I2C_Pin_SCL
#define SDA_H         ANO_GPIO_I2C->BSRR = I2C_Pin_SDA
#define SDA_L         ANO_GPIO_I2C->BRR  = I2C_Pin_SDA
#define SCL_read      ANO_GPIO_I2C->IDR  & I2C_Pin_SCL
#define SDA_read      ANO_GPIO_I2C->IDR  & I2C_Pin_SDA


/***************I2C GPIO����******************/
#define ANO_GPIO_I2C	GPIOB
#define I2C_Pin_SCL		GPIO_Pin_6
#define I2C_Pin_SDA		GPIO_Pin_7
#define ANO_RCC_I2C		RCC_APB2Periph_GPIOB
/*********************************************/



	//ANO_I2C_Soft();
  void I2C_soft_Init(void);
	
	int I2C_Single_Write(u8 SlaveAddress,u8 REG_Address,u8 REG_data);	
	int I2C_Single_Read(u8 SlaveAddress,u8 REG_Address);
	int I2C_Mult_Read(u8 SlaveAddress,u8 REG_Address,u8 * ptChar,u8 size);


	void I2C_delay(void);
	int I2C_Start(void);
	void I2C_Stop(void);
	void I2C_Ack(void); 
	void I2C_NoAck(void);
	int I2C_WaitAck(void); 	 //����Ϊ:=1��ACK,=0��ACK
	void I2C_SendByte(u8 SendByte);
	u8 I2C_ReadByte(void);  //���ݴӸ�λ����λ//

	

#endif




/******************* (C) COPYRIGHT 2014 ANO TECH *****END OF FILE************/
