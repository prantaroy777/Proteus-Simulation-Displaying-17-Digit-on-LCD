/*
 * exp3_keypad_advanced.c
 *
 * Created: 6/22/2022 7:40:08 PM
 * Author: Md Rakibul Hasan
 */

#include <mega32.h>
#include <delay.h>
#include <alcd.h>
#define keypad_ddr DDRC
#define keypad_port PORTC
#define input_data PINC
void main(void)
{
    char x=0;
    int del=300;  
    keypad_ddr=0xF0;
    lcd_init(16);

    while (1)
      {
        keypad_port=0b11101111;
        if (input_data.0==0){
            lcd_gotoxy(x,0);
            lcd_putsf("1"); 
            delay_ms(del);
            x++; 
            input_data.0=1;
        }
        if (input_data.1==0){
            lcd_gotoxy(x,0);
            lcd_putsf("4");  
            delay_ms(del);
            x++; 
            input_data.1=1;
        }
        if (input_data.2==0){
            lcd_gotoxy(x,0);
            lcd_putsf("7");  
            delay_ms(del);
            x++; 
            input_data.2=1;
        }
        if (input_data.3==0){
            lcd_gotoxy(x,0);
            lcd_putsf("*");  
            delay_ms(del);
            x++; 
            input_data.3=1;
        }   
        
        keypad_port=0b11011111;
        if (input_data.0==0){
            lcd_gotoxy(x,0);
            lcd_putsf("2"); 
            delay_ms(del);
            x++; 
            input_data.0=1;
        }
        if (input_data.1==0){
            lcd_gotoxy(x,0);
            lcd_putsf("5");
            delay_ms(del);
            x++; 
            input_data.1=1;
        }
        if (input_data.2==0){
            lcd_gotoxy(x,0);
            lcd_putsf("8");
             delay_ms(del);
            x++; 
            input_data.2=1;
        }
        if (input_data.3==0){
            lcd_gotoxy(x,0);
            lcd_putsf("0"); 
             delay_ms(del);
            x++; 
            input_data.3=1;
        }

        keypad_port=0b10111111;
        if (input_data.0==0){
            lcd_gotoxy(x,0);
            lcd_putsf("3"); 
             delay_ms(del);
            x++; 
            input_data.0=1;
        }
        if (input_data.1==0){
            lcd_gotoxy(x,0);
            lcd_putsf("6");  
             delay_ms(del);
            x++; 
            input_data.1=1;
        }
        if (input_data.2==0){
            lcd_gotoxy(x,0);
            lcd_putsf("9");   
             delay_ms(del);
            x++; 
            input_data.2=1;
        }
        if (input_data.3==0){
            lcd_gotoxy(x,0);
            lcd_putsf("#"); 
             delay_ms(del);
            x++; 
            input_data.3=1;
        }
      }
}

