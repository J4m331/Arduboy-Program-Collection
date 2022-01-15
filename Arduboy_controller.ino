#include <Arduboy2.h>
#include <Keyboard.h>

	Arduboy2 arduboy;

void setup() {
  // put your setup code here, to run once:
	arduboy.begin();
	Keyboard.begin();
	arduboy.setFrameRate(255);
}

void loop() {
  // put your main code here, to run repeatedly:
	arduboy.clear();
	arduboy.setCursor(0,0);
	arduboy.print(F("Arduboy_Ctrlr[J4m331]"));
	movement_input();
	arduboy.display();
}

void movement_input(){
	if(arduboy.pressed(UP_BUTTON)){
		Keyboard.press('w');
		arduboy.setCursor(64,20);
		arduboy.print(F("^"));
	}
	if(arduboy.pressed(DOWN_BUTTON)){
		Keyboard.press('s');
		arduboy.setCursor(64,44);
		arduboy.print(F("v"));
	}
	if(arduboy.pressed(LEFT_BUTTON)){
		Keyboard.press('a');
		arduboy.setCursor(52,32);
		arduboy.print(F("<"));
	}
	if(arduboy.pressed(RIGHT_BUTTON)){
		Keyboard.press('d');
		arduboy.setCursor(76,32);
		arduboy.print(F(">"));
	}
	if(arduboy.pressed(A_BUTTON)){
		Keyboard.press(32);
		arduboy.setCursor(64,32);
		arduboy.print(F("J"));
	}
	
	Keyboard.releaseAll();
	
}
