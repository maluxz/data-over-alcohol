#include <LiquidCrystal.h> // Incluye la Libreria LiquidCrystal
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Crea un Objeto LC. Parametros: (rs, enable, d4, d5, d6, d7)


int sensorPin = A0; // select the input pin for LDR
int sensorValue = 0; // variable to store the value coming from the sensor

int parteaguas = 400;
void setup() {
pinMode(3, OUTPUT);
  analogWrite(3, 100);  
  lcd.begin(16,2); // Inicializa la interface para el LCD screen, and determina sus dimensiones (ancho y alto) del display
  
Serial.begin(9600); //sets serial port for communication

//lcd.setCursor(0,4);
//lcd.print("MARIO LUJAN");
//lcd.setCursor(0,0);
}
void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor

if(sensorValue > parteaguas){
  char letra;
  delay(1250);
  sensorValue = analogRead(sensorPin);
  if(sensorValue > parteaguas){
    letra+=64;
  }
  delay(500);
  sensorValue = analogRead(sensorPin);
  if(sensorValue > parteaguas){
    letra+=32;
  }
  delay(500);
  sensorValue = analogRead(sensorPin);
  if(sensorValue > parteaguas){
    letra+=16;
  }
  delay(500);
  sensorValue = analogRead(sensorPin);
  if(sensorValue > parteaguas){
    letra+=8;
  }
  delay(500);
  sensorValue = analogRead(sensorPin);
  if(sensorValue > parteaguas){
    letra+=4;
  }
  delay(500);
  sensorValue = analogRead(sensorPin);
  if(sensorValue > parteaguas){
    letra+=2;
  }
  delay(500);
  sensorValue = analogRead(sensorPin);
  if(sensorValue > parteaguas){
    letra+=1;
  }
  escribir(letra);
  delay(250);
}
}

void escribir(char let){
  if(let == '*'){
    lcd.clear();
  }else{
    lcd.print(let);
  }
  
}