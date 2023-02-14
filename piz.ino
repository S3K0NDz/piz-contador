
int contador = 0;
void setup(){
  Serial.begin(9600);
  pinMode(7, INPUT);
  
}
void loop(){
  if(digitalRead(3)== HIGH){
    if(digitalRead(3)== LOW){
      contador++;
      delay(5);
      Serial.print(contador);
    }
    }
 
}
