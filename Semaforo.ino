int rojo=5; 
int amarillo=6; 
int verde=7; 
void setup() { 
pinMode(rojo,OUTPUT); 
pinMode(amarillo,OUTPUT); 
pinMode(verde,OUTPUT); 
}

void loop() { 
digitalWrite(verde,LOW); 
digitalWrite(rojo,HIGH); 
delay(3000); 
digitalWrite(rojo,LOW); 
digitalWrite(amarillo,HIGH); 
delay(500); 
digitalWrite(amarillo,LOW); 
delay(500); 
digitalWrite(amarillo,HIGH); 
delay(500); 
digitalWrite(amarillo,LOW); 
delay(500);
digitalWrite(amarillo,HIGH); 
delay(500); 
digitalWrite(amarillo,LOW); 
delay(500); 
digitalWrite(verde,HIGH); 
delay(3000);
}
