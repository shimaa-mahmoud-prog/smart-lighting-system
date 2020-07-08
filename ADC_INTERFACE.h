/*
 * ADC_INTERFACE.h
 *
 *  Created on: Feb 12, 2020
 *      Author: Shimaa El-Debeky
 */

#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_
typedef enum{
	ADC0=0,
	ADC1,
	ADC2,
	ADC3,
	ADC4,
	ADC5,
	ADC6,
	ADC7
}ADC_TYPE;

/////////////////////////////////////////////////////////////////////////////////////////////////////////
         /*                         ADMUX                                    */

#define 							REFS1 									7
#define 							REFS0 									6
#define 							ADLAR 									5
#define 							MUX4 									4
#define 							MUX3									3
#define 							MUX2 									2
#define 							MUX1 									1
#define 							MUX0 									0

///////////////////////////////////////////////////////////////////////////////////////////////////////////
       /*                           ADCSRA                                   */

#define 							ADEN   									7
#define 							ADSC 									6
#define 							ADATE 									5
#define 							ADIF 									4
#define 							ADIE									3
#define 							ADPS2 									2
#define 							ADPS1									1
#define 							ADPS0									0

///////////////////////////////////////////////////////////////////////////////////////////////////////////
         /*                         SFIOR''AUTO TRIGGER SOURCE              */

#define 							ADTS2   							    7
#define 							ADTS1 									6
#define 							ADTS0 									5
///////////////////////////////////////////////////////////////////////////////////////////////////////////
        /*                          ADC_CONV_MODE                                   */
#define 							SINGLE_MODE     							    0
#define 							FREE_Runing_MODE		       					1
////////////////////////////////////////////////////////////////////////////////////////////////////////////
      /*                            VREF                                             */
#define 							AREF   					  					    0
#define 							AVCC 											1
#define 							INTERNAL 										3
////////////////////////////////////////////////////////////////////////////////////////////////////////////
     /*								ADC CHANNEL										*/
#define 							PRESCALER_64   					  			    6
#define 							PRESCALER_128									7
////////////////////////////////////////////////////////////////////////////////////////////////////////////
   /*								8-or-10bit DAtA STORAGE  		                     	*/
#define 						     left_adjustment_8bitRead 					    1
#define 							 right_adjustment_10bitRead						0
#define                              Read_8_bit  									2
#define                              Read_10_bit  									3
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
   /*                               interrupt Or polling                            */
#define 							INTERRUPT   					  			    0
#define 							GIE   					         			    7
#define 							POLLING 										1

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define 							num_of_channels 							     1


void ADC_vid_CONF(ADC_TYPE LOC_enum_ADCNUM,u8 LOC_U8_VREF,u8 LOC_U8_8_OR_10bitDATA_ADJUSTMENT,u8 LOC_U8_ADC_Mode,u8 LOC_U8_ADC_Prescaler,u8 LOC_U8_INTERRUPTOrPolling);
void ADC_StartConversion(void);
void ADC_Vid_INTERRUPT_DISABLE();
u16 ADC_Vid_READ_ANALOG_DATA(u8 LOC_U8_Read_8_or_10_Bit,u16 VREF_mv);
u8 ADC_U8_ReadFlag();
void ADC_Vid_ClearFlag();

void ADC0_Vid_CallBackFunction(void(*ptr)(void));
void ADC1_Vid_CallBackFunction(void(*ptr)(void));
void ADC2_Vid_CallBackFunction(void(*ptr)(void));
void ADC3_Vid_CallBackFunction(void(*ptr)(void));
void ADC4_Vid_CallBackFunction(void(*ptr)(void));
void ADC5_Vid_CallBackFunction(void(*ptr)(void));
void ADC6_Vid_CallBackFunction(void(*ptr)(void));
void ADC7_Vid_CallBackFunction(void(*ptr)(void));



#endif /* ADC_INTERFACE_H_ */
