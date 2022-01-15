#include <Arduboy2.h>
#include <Mouse.h>

	Arduboy2 arduboy;
	
	float x = 0;
	float y = 0;
	
	float move_number = 3;

void setup() {
  // put your setup code here, to run once:
	arduboy.begin();
	arduboy.setFrameRate(255);
	Mouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
	arduboy.clear();
	arduboy.setCursor(0,0);
	arduboy.print(F("Arduboy_Mouse[J4m331]"));
	move_mouse();
	click_mouse();
	arduboy.display();
}

void move_mouse(){
	if(arduboy.pressed(RIGHT_BUTTON)){
		x = x + move_number;
		arduboy.setCursor(76,32);
		arduboy.print(F(">"));
	}
	if(arduboy.pressed(LEFT_BUTTON)){
		x = x - move_number;
		arduboy.setCursor(52,32);
		arduboy.print(F("<"));
	}
	if(arduboy.pressed(UP_BUTTON)){
		y = y - move_number;
		arduboy.setCursor(64,20);
		arduboy.print(F("^"));
	}
	if(arduboy.pressed(DOWN_BUTTON)){
		y = y + move_number;
		arduboy.setCursor(64,44);
		arduboy.print(F("v"));
	}
	
	Mouse.move(x,y,0);
	
	x = 0;
	y = 0;
}

void click_mouse(){
	if(arduboy.pressed(A_BUTTON)){
		Mouse.press(MOUSE_LEFT);
		arduboy.setCursor(58,32);
		arduboy.print(F("L"));
	}
	if(arduboy.pressed(B_BUTTON)){
		Mouse.press(MOUSE_RIGHT);
		arduboy.setCursor(68,32);
		arduboy.print(F("R"));
	}
	
	if((!(arduboy.pressed(A_BUTTON))) && (!(arduboy.pressed(B_BUTTON)))){
		Mouse.release(MOUSE_LEFT);
		Mouse.release(MOUSE_RIGHT);
	}
}
