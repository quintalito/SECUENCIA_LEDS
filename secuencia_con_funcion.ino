/*
 * este programa enciende leds en secuencia
 * al presionar un boton
 * hccho por Julio Samayoa
 * 28 de Junio del 2017
 */

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);//primer led en secuencia
  pinMode(12, INPUT_PULLUP);//boton que activa la secuencia de leds
  pinMode(8, OUTPUT);//segundo led en secuencia
  pinMode(7, OUTPUT);//tercer led en secuencia
  pinMode(4, OUTPUT);//cuarto led en secuencia
  pinMode(2, OUTPUT);//ultimo led en secuencia
}

void parpadear(int tiempo){
  
  //primer led en secuencia
  digitalWrite(13,HIGH);
  delay(tiempo);
  digitalWrite(13,LOW);
  delay(tiempo);

  //segundo led en secuencia
  digitalWrite(8,HIGH);
  delay(tiempo);
  digitalWrite(8,LOW);
  delay(tiempo);

  //tercer led en secuencia
  digitalWrite(7,HIGH);
  delay(tiempo);
  digitalWrite(7,LOW);
  delay(tiempo);

  //cuarto led en secuencia
  digitalWrite(4,HIGH);
  delay(tiempo);
  digitalWrite(4,LOW);
  delay(tiempo);

  //ultimo led en secuencia
  digitalWrite(2,HIGH);
  delay(tiempo);
  digitalWrite(2,LOW);
  delay(tiempo);
 
  }
  
void loop() {
  // put your main code here, to run repeatedly:
  byte estadoBoton = !digitalRead(12);
  if(estadoBoton==1){
    parpadear(500);
  }
}
