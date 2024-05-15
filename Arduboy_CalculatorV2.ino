#include <Arduboy2.h>

Arduboy2 ard;

int frameVal = 10;

int ptrVal = 0;
int modeVal = 0;
int paramNum = 1;

int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;
int result = 0;
float result_F = 0;

void setup() {
  ard.begin();
}

void loop() {
  ard.setFrameRate(frameVal);
  if(!(ard.nextFrame()))
    return;
  ard.clear();
  ard.setCursor(0,0);
	ard.print(F("Arduboy_Calcr[J4m331]"));
  modeChange();
  display_calc();
  ard.display();
}

void modeChange(){
  if(modeVal == 0)
    addition();
  if(modeVal == 1)
    subtraction();
  if(modeVal == 2)
    multiplication();
  if(modeVal == 3)
    division();
  if(modeVal == 4)
    exponent();
  
  if(ard.pressed(RIGHT_BUTTON)){
    ptrVal++;
  }
  if(ard.pressed(LEFT_BUTTON)){
    ptrVal--;
    if(ptrVal < 0){
      ptrVal = 0;
    }
  }
  
  if(ptrVal == 0){
    if(ard.pressed(UP_BUTTON)){
      modeVal++;
      if(modeVal > 4)
        modeVal = 0;
    }
    if(ard.pressed(DOWN_BUTTON)){
      modeVal--;
      if(modeVal < 0)
        modeVal = 4;
    }
  }
  
  if(ptrVal == 1){
    if(ard.pressed(UP_BUTTON)){
      paramNum++;
    }
    if(ard.pressed(DOWN_BUTTON)){
      paramNum--;
    }
  }

  if(ard.pressed(A_BUTTON)){
    frameVal = 60;
  }
  else{
    frameVal = 10;
  }

  if(ard.pressed(B_BUTTON)){
    ptrVal = 0;
    modeVal = 0;
    paramNum = 1;

    val1 = 0;
    val2 = 0;
    result = 0;
  }
}

void addition(){
  if(paramNum == 1){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
      result = val1;
    }
  }
  
  if(paramNum == 2){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    result = val1 + val2;
  }

  if(paramNum == 3){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    result = val1 + val2 + val3;
  }

  if(paramNum == 4){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    result = val1 + val2 + val3 + val4;
  }
  
  if(paramNum == 5){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    if(ptrVal == 6){
      if(ard.pressed(UP_BUTTON)){
        val5++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val5--;
      }
    }
    result = val1 + val2 + val3 + val4 + val5;
  }
}

void subtraction(){
  if(paramNum == 1){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
      result = val1;
    }
  }
  
  if(paramNum == 2){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    result = val1 - val2;
  }

  if(paramNum == 3){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    result = val1 - val2 - val3;
  }

  if(paramNum == 4){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    result = val1 - val2 - val3 - val4;
  }
  
  if(paramNum == 5){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    if(ptrVal == 6){
      if(ard.pressed(UP_BUTTON)){
        val5++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val5--;
      }
    }
    result = val1 - val2 - val3 - val4 - val5;
  }
}

void multiplication(){
  if(paramNum == 1){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
      result = val1;
    }
  }
  
  if(paramNum == 2){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    result = val1 * val2;
  }

  if(paramNum == 3){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    result = val1 * val2 * val3;
  }

  if(paramNum == 4){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    result = val1 * val2 * val3 * val4;
  }
  
  if(paramNum == 5){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    if(ptrVal == 6){
      if(ard.pressed(UP_BUTTON)){
        val5++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val5--;
      }
    }
    result = val1 * val2 * val3 * val4 * val5;
  }
}

void division(){
  if(paramNum == 1){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
      result = val1;
    }
  }
  
  if(paramNum == 2){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    result = val1 / val2;
  }

  if(paramNum == 3){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    result = val1 / val2 / val3;
  }

  if(paramNum == 4){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    result = val1 / val2 / val3 / val4;
  }
  
  if(paramNum == 5){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    if(ptrVal == 6){
      if(ard.pressed(UP_BUTTON)){
        val5++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val5--;
      }
    }
    result = val1 / val2 / val3 / val4 / val5;
  }
}

void exponent(){
  if(paramNum == 1){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
      result_F = val1;
    }
  }
  
  if(paramNum == 2){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    result_F = pow(val1,val2);
  }

  if(paramNum == 3){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    int ex1 = pow(val2,val3);
    result_F = pow(val1,ex1);
  }

  if(paramNum == 4){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    int ex1 = pow(val3,val4);
    int ex2 = pow(val2,ex1);
    result_F = pow(val1,ex2);
  }
  
  if(paramNum == 5){
    if(ptrVal == 2){
      if(ard.pressed(UP_BUTTON)){
        val1++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val1--;
      }
    }
    if(ptrVal == 3){
      if(ard.pressed(UP_BUTTON)){
        val2++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val2--;
      }
    }
    if(ptrVal == 4){
      if(ard.pressed(UP_BUTTON)){
        val3++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val3--;
      }
    }
    if(ptrVal == 5){
      if(ard.pressed(UP_BUTTON)){
        val4++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val4--;
      }
    }
    if(ptrVal == 6){
      if(ard.pressed(UP_BUTTON)){
        val5++;
      }
      if(ard.pressed(DOWN_BUTTON)){
        val5--;
      }
    }
    int ex1 = pow(val4,val5);
    int ex2 = pow(ex1,val3);
    int ex3 = pow(ex2,val2);
    result_F = pow(val1,ex3);
  }
}

void display_calc(){
  ard.drawLine(0,10,128,10);
  ard.setCursor(0,12);
  if(modeVal == 0){
    ard.println("Mode : Add [+]");
    ard.print("Param: ");
    ard.print(paramNum);
    ard.print("  |Edit :");
    ard.println(ptrVal);
    ard.setCursor(0,32);
    if(paramNum == 1){
      ard.print(val1);
    }
    if(paramNum == 2){
      ard.print(val1);
      ard.print(" + ");
      ard.print(val2);
    }
    if(paramNum == 3){
      ard.print(val1);
      ard.print(" + ");
      ard.print(val2);
      ard.print(" + ");
      ard.print(val3);
    }
    if(paramNum == 4){
      ard.print(val1);
      ard.print(" + ");
      ard.print(val2);
      ard.print(" + ");
      ard.print(val3);
      ard.print(" + ");
      ard.print(val4);
    }
    if(paramNum == 5){
      ard.print(val1);
      ard.print(" + ");
      ard.print(val2);
      ard.print(" + ");
      ard.print(val3);
      ard.print(" + ");
      ard.print(val4);
      ard.print(" + ");
      ard.print(val5);
    }
  }

  if(modeVal == 1){
    ard.println("Mode : Subtract [-]");
    ard.print("Param: ");
    ard.print(paramNum);
    ard.print("  |Edit :");
    ard.println(ptrVal);
    ard.setCursor(0,32);
    if(paramNum == 1){
      ard.print(val1);
    }
    if(paramNum == 2){
      ard.print(val1);
      ard.print(" - ");
      ard.print(val2);
    }
    if(paramNum == 3){
      ard.print(val1);
      ard.print(" - ");
      ard.print(val2);
      ard.print(" - ");
      ard.print(val3);
    }
    if(paramNum == 4){
      ard.print(val1);
      ard.print(" - ");
      ard.print(val2);
      ard.print(" - ");
      ard.print(val3);
      ard.print(" - ");
      ard.print(val4);
    }
    if(paramNum == 5){
      ard.print(val1);
      ard.print(" - ");
      ard.print(val2);
      ard.print(" - ");
      ard.print(val3);
      ard.print(" - ");
      ard.print(val4);
      ard.print(" - ");
      ard.print(val5);
    }
  }
  
  if(modeVal == 2){
    ard.println("Mode : Multiply [x]");
    ard.print("Param: ");
    ard.print(paramNum);
    ard.print("  |Edit :");
    ard.println(ptrVal);
    ard.setCursor(0,32);
    if(paramNum == 1){
      ard.print(val1);
    }
    if(paramNum == 2){
      ard.print(val1);
      ard.print(" * ");
      ard.print(val2);
    }
    if(paramNum == 3){
      ard.print(val1);
      ard.print(" * ");
      ard.print(val2);
      ard.print(" * ");
      ard.print(val3);
    }
    if(paramNum == 4){
      ard.print(val1);
      ard.print(" * ");
      ard.print(val2);
      ard.print(" * ");
      ard.print(val3);
      ard.print(" * ");
      ard.print(val4);
    }
    if(paramNum == 5){
      ard.print(val1);
      ard.print(" * ");
      ard.print(val2);
      ard.print(" * ");
      ard.print(val3);
      ard.print(" * ");
      ard.print(val4);
      ard.print(" * ");
      ard.print(val5);
    }
  }
  
  if(modeVal == 3){
    ard.println("Mode : Divide [/]");
    ard.print("Param: ");
    ard.print(paramNum);
    ard.print("  |Edit :");
    ard.println(ptrVal);
    ard.setCursor(0,32);
    if(paramNum == 1){
      ard.print(val1);
    }
    if(paramNum == 2){
      ard.print(val1);
      ard.print(" / ");
      ard.print(val2);
    }
    if(paramNum == 3){
      ard.print(val1);
      ard.print(" / ");
      ard.print(val2);
      ard.print(" / ");
      ard.print(val3);
    }
    if(paramNum == 4){
      ard.print(val1);
      ard.print(" / ");
      ard.print(val2);
      ard.print(" / ");
      ard.print(val3);
      ard.print(" / ");
      ard.print(val4);
    }
    if(paramNum == 5){
      ard.print(val1);
      ard.print(" / ");
      ard.print(val2);
      ard.print(" / ");
      ard.print(val3);
      ard.print(" / ");
      ard.print(val4);
      ard.print(" / ");
      ard.print(val5);
    }
  }
  
  if(modeVal == 4){
    ard.println("Mode : Exponent [^]");
    ard.print("Param: ");
    ard.print(paramNum);
    ard.print("  |Edit :");
    ard.println(ptrVal);
    ard.setCursor(0,32);
    if(paramNum == 1){
      ard.print(val1);
    }
    if(paramNum == 2){
      ard.print(val1);
      ard.print(" ^ ");
      ard.print(val2);
    }
    if(paramNum == 3){
      ard.print(val1);
      ard.print(" ^ ");
      ard.print(val2);
      ard.print(" ^ ");
      ard.print(val3);
    }
    if(paramNum == 4){
      ard.print(val1);
      ard.print(" ^ ");
      ard.print(val2);
      ard.print(" ^ ");
      ard.print(val3);
      ard.print(" ^ ");
      ard.print(val4);
    }
    if(paramNum == 5){
      ard.print(val1);
      ard.print(" ^ ");
      ard.print(val2);
      ard.print(" ^ ");
      ard.print(val3);
      ard.print(" ^ ");
      ard.print(val4);
      ard.print(" ^ ");
      ard.print(val5);
    }
  }

  ard.drawLine(0,30,128,30);
  ard.drawLine(0,50,128,50);
  ard.setCursor(0, 52);
  ard.print(" = ");
  if(modeVal == 4)
    ard.print(result_F);
  else
    ard.print(result);
}
