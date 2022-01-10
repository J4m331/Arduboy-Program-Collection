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
	movement_input();
	arduboy.display();
}

void movement_input(){
	if(arduboy.pressed(UP_BUTTON)){
		Keyboard.press('w');
	}
	if(arduboy.pressed(DOWN_BUTTON)){
		Keyboard.press('s');
	}
	if(arduboy.pressed(LEFT_BUTTON)){
		Keyboard.press('a');
	}
	if(arduboy.pressed(RIGHT_BUTTON)){
		Keyboard.press('d');
	}
	if(arduboy.pressed(A_BUTTON)){
		Keyboard.press(32);
	}
	
	Keyboard.releaseAll();
	
}
