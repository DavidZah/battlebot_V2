#include <atmel_start.h>
#include "avr/delay.h"

#define DISTANCE 1500

bool scanL(){
	int x = 0; 
	TRIG_L_set_level(true);
	_delay_us(15); 
	TRIG_L_set_level(false);
	
	while(!ECHO_L_get_level()&&x<5000){
		x++;
	}
	while(ECHO_L_get_level()&&x<5000)
	{
		x++; 
	}
	if(x<DISTANCE){
		return true; 
	}
	return false; 
}
bool scanR(){
	int x = 0;
	bool y = false; 
	TRIG_R_set_level(true);
	_delay_us(15); 
	TRIG_R_set_level(false);
	
	while(!ECHO_R_get_level()&&x<5000){
		x++;
	}
	while(ECHO_R_get_level()&&x<5000)
	{
		x++; 
	}
	if(x<DISTANCE){
		y = true; 
	}
	return y; 
}
bool scanF(){
	int x = 0; 
	TRIG_F_set_level(true);
	_delay_us(15); 
	TRIG_F_set_level(false);
	
	while(!ECHO_F_get_level()&&x<5000){
		x++;
	}
	while(ECHO_F_get_level()&&x<5000)
	{
		x++; 
	}
	if(x<DISTANCE){
		return true; 
			}	return false; 
}

void setSpeed(int left,int right){
	 if(left < 256){
		 IN1_set_level(true);
		 IN2_set_level(false);
		 OCR2A = left;
	 }
	 if(left > 256){
		 IN1_set_level(false);
		 IN2_set_level(true);
		 OCR2A = left-255;
	 }
	 if(left == 256){
		 OCR2A = 0;
	 }
	 
	 if(right < 256){
		 
		 IN3_set_level(false);
		 IN4_set_level(true);
		 OCR2B = right;
	 }
	 if(right > 256){
		 IN3_set_level(true);
		 IN4_set_level(false);
		 OCR2B = right-255;
	 }
	 if(right == 256){
		 OCR2B = 0; 
	 }
}

bool on_line(){
	int x[2] = {0,0}; 
	x[0] = ADC_0_get_conversion(5);
	x[1] = ADC_0_get_conversion(4);
	if(x[0] > 500 && x[1] > 500){
		return true;
	}
	return false; 
}
int scan_all(){
	if (scanF())
	{
		return 1; 
	}
	if (scanR())
	{
		return 2; 
	}
	if (scanL())
	{
		return 3; 
	}
	return 0;  
}

# define F_CPU 100000UL

int main(void)
{
	
	/* Initializes MCU, drivers and middleware */
	
	atmel_start_init();
	for (long i=0;i<2500000;i++)
	{
		 
	}
	setSpeed(400,250); 
	/* Replace with your application code */
	while (1) {
		int x = scan_all();
		
		bool y = on_line(); 
		if (x == 0&& y)
		{
			setSpeed(0,0);
		}
		if(x == 2&& y){
			setSpeed(450,0);
		}
		if(x == 3&& y){
			setSpeed(0,450);
		}
		if(x == 1&& y){
			setSpeed(510,510);
		}
		
	
		if (!y)
		{
			setSpeed(250,250);
			_delay_ms(2000);  
			setSpeed(0,0);
		}
		
	}
}
