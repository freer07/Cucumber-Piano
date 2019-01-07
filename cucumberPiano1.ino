//created by: Alexander Freer 
//Jan 1, 2019

#include "pitches.h"

int toneOut = 8;
int myNote[] = { NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5 };

void setup(){
  Serial.begin(9600);
  pinMode(toneOut,OUTPUT);
}

void loop(){

  
  /**
  Serial.print(analogRead(A0));
  Serial.print("       ");
  Serial.print(analogRead(A1));
  Serial.print("       ");
  Serial.print(analogRead(A2));
  Serial.print("       ");
  Serial.print(analogRead(A3));
  Serial.print("       ");
  Serial.print(analogRead(A4));
  Serial.print("       ");
  Serial.println(analogRead(A5));
  **/

  if(analogRead(A0) < 550){
    tone(toneOut, NOTE_E4, 150);
  }

  else if(analogRead(A1) < 550){
    tone(toneOut, NOTE_F4, 150);
  }

  else if(analogRead(A2) < 550){
    tone(toneOut, NOTE_G4, 150);
  }
  else if(analogRead(A3) < 550){
      tone(toneOut, NOTE_A4, 150);
    }
  else if(analogRead(A4) < 550){
      tone(toneOut, NOTE_B4, 150);
    }
  else if(analogRead(A5) < 550){
      tone(toneOut, NOTE_C5, 150);
    }

  
}
