#include <Arduino.h>
#define led 16
#define boton 5
int estadoboton = 0; 
int estadoanterior = 0;
int lightsOn = 0;

void setup()
{ 
 pinMode(boton, INPUT); 
 pinMode(led, OUTPUT);
}

void loop() 
{
  estadoboton = digitalRead(boton);
  if (estadoboton != estadoanterior){
    estadoanterior = estadoboton;
    if (estadoboton == HIGH){
      lightsOn = !lightsOn;
    }
  }
  if(lightsOn){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}