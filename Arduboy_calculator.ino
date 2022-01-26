#include <Arduboy2.h>

	Arduboy2 arduboy;
	
	int value_A = 0;
	int value_B = 0;
	int value_C = 0;

	float value_A_f = 0;
	float value_B_f = 0;
	float value_C_f = 0;
	
	int menu_value = 1;
	int operation_value = 1;
	
	int frame_value = 10;
	
	String operation = "+";
	
	String editing;
	
	bool button_pressed = false;

void setup() {
  // put your setup code here, to run once:
	arduboy.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  arduboy.setFrameRate(frame_value);
	if(!(arduboy.nextFrame()))
		return;
	arduboy.clear();
	arduboy.setCursor(0,0);
	arduboy.print(F("Arduboy_Calcr[J4m331]"));
	value_changes();
	calculations();
	display_calc();
	arduboy.display();
}

void value_changes(){
	
	if(arduboy.pressed(A_BUTTON)){
		frame_value = 60;
	}
	else{
		frame_value = 10;
	}
	
	if(arduboy.pressed(B_BUTTON)){
		value_A = 0;
		value_B = 0;
	}
	
	if(arduboy.pressed(RIGHT_BUTTON)){
		menu_value++;
		if (menu_value > 3){
			menu_value = 1;
		}
	}
	
	if((arduboy.pressed(UP_BUTTON)) && (menu_value == 1)){
		value_A++;
		button_pressed == true;
	}
	if((arduboy.pressed(DOWN_BUTTON)) && (menu_value == 1)){
		value_A--;
	}
	
	if((arduboy.pressed(UP_BUTTON)) && (menu_value == 2)){
		operation_value++;
	}
	
	if((arduboy.pressed(DOWN_BUTTON)) && (menu_value == 2)){
		operation_value--;
	}
	
	if((arduboy.pressed(UP_BUTTON)) && (menu_value == 3)){
		value_B++;
	}
	if((arduboy.pressed(DOWN_BUTTON)) && (menu_value == 3)){
		value_B--;
	}
}

void calculations(){
	if(operation_value > 5){
		operation_value = 1;
	}
	
	if(operation_value < 1){
		operation_value = 5;
	}
	
	if(operation_value == 1){
		operation = "+";
		value_C = value_A + value_B;
	}		
	
	if(operation_value == 2){
		operation = "-";
		value_C = value_A - value_B;
	}	
	
	if(operation_value == 3){
		operation = "*";
		value_C = value_A * value_B;
	}		
	
	if(operation_value == 4){
		operation = "/";
		value_C = value_A / value_B;
	}
 
	if(operation_value == 5){
		operation = "^";
		value_C_f = pow (value_A,value_B);
	}
	
}

void display_calc(){
	arduboy.setCursor(16,32);
	arduboy.print(value_A);
	arduboy.print(" ");
	arduboy.print(operation);
	arduboy.print(" ");
	arduboy.print(value_B);
	arduboy.print(" = ");
	if(operation_value != 5){
		arduboy.print(value_C);
	}
	else{
		arduboy.print(value_C_f);
	}
	
	if(menu_value == 1){
		editing = "Editing Value 1";
	}
	if(menu_value == 2){
		editing = "Editing Operator";
	}
	if(menu_value == 3){
		editing = "Editing Value 2";
	}
	
	arduboy.setCursor(16,16);
	arduboy.print(editing);
}
