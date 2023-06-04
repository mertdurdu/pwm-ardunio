#define pot A0
float deger;
int ydeger;
float volt;


void setup() {

  Serial.begin(9600);
  

}

void loop() {
 deger=analogRead(A0);
 volt= deger*5/1023;
 ydeger=map(deger,0,1023,0,255);
  Serial.print("volt degeri:"); Serial.println(volt);
  analogWrite(3,ydeger);
  
  
  

}
