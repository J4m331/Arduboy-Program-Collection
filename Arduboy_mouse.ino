#include <Arduboy2.h>
#include <Mouse.h>

	Arduboy2 arduboy;
	
	float x = 0;
	float y = 0;
	
	float move_number = 1.75;

void setup() {
  // put your setup code here, to run once:
	arduboy.begin();
	arduboy.setFrameRate(1);
	Mouse.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
	arduboy.clear();
	move_mouse();
	click_mouse();
	arduboy.display();
}

void move_mouse(){
	if(arduboy.pressed(RIGHT_BUTTON)){
		x = x + move_number;
	}
	if(arduboy.pressed(LEFT_BUTTON)){
		x = x - move_number;
	}
	if(arduboy.pressed(UP_BUTTON)){
		y = y - move_number;
	}
	if(arduboy.pressed(DOWN_BUTTON)){
		y = y + move_number;
	}
	
	Mouse.move(x,y,0);
	
	x = 0;
	y = 0;
}

void click_mouse(){
	if(arduboy.pressed(A_BUTTON)){
		Mouse.press(MOUSE_LEFT);
	}
	if(arduboy.pressed(B_BUTTON)){
		Mouse.press(MOUSE_RIGHT);
	}
	
	if((!(arduboy.pressed(A_BUTTON))) && (!(arduboy.pressed(B_BUTTON)))){
		Mouse.release(MOUSE_LEFT);
		Mouse.release(MOUSE_RIGHT);
	}
}
