#include <Key.h>
#include <Keypad.h>



const byte filas = 4;
const byte columnas = 4;
byte pinsFilas[filas] = {2, 3, 4, 5};
byte pinsColumnas[columnas] = {6, 7, 8, 9};
int brillo = 0;
char teclas[filas][columnas] = {
  {'A','B','C','D'},
  {'E','F','G','H'},
  {'I','J','K','L'},
  {'M','N','O','P'}
};

Keypad teclado = Keypad(makeKeymap(teclas), pinsFilas, pinsColumnas, filas, columnas);

char tecla;
int incomingByte = 0; 

int velocidad = 500;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  tecla = teclado.getKey();
  if(tecla != NO_KEY){
    enviar(tecla);
  }
}

void enviar(char letra){
  byte numero = letra;
  String binario = String(letra, BIN);
  char n1 = binario.charAt(0);
  char n2 = binario.charAt(1);
  char n3 = binario.charAt(2);
  char n4 = binario.charAt(3);
  char n5 = binario.charAt(4);
  char n6 = binario.charAt(5);
  char n7 = binario.charAt(6);
  char n8 = binario.charAt(7);
  digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
  for(int i = 0; i<8; i++){
    if(binario.charAt(i) == '1'){
      digitalWrite(13, HIGH);
      delay(velocidad);
    }else{
      digitalWrite(13, LOW);
      delay(velocidad);
    }
  }
  delay(1000);
}