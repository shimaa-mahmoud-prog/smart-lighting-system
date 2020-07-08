

#ifndef  LCD_INTERFACE_H
#define LCD_INTERFACE_H

#define PORT_DATA		   PORTB
#define PORT_CONTROL		PORTD
#define RS_PIN				PIN5
#define RW_PIN				PIN6
#define EN_PIN				PIN7




#define LCD_SHIFT_RIGHT		1
#define LCD_SHIFT_LEFT		2


#define LCD_GOTO_UP			4
#define LCD_GOTO_DOWN		8

#define LCD_WORD         "shimaa"


void LCD_voidInit(void);
void LCD_sendcmd(u8 u8cmd_copy);
void LCD_WRITEdata(u8 u8Data_copy);
void LCD_WRITEstring(u8 *ptr);
void LCD_goto(u8 raw,u8 colom);
void LCD_Void_control_LCD(u8 copy_u8_control_button_value);
void LCD_WRITE_NUM(s32 num);
void LCD_DIGIT(u8 num);
s32 REVERSE_NUM(s32 num);

//u8 word_num_of_digit(u8*ptr);

#endif
