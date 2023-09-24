int val=0;
void setup(){
  Serial.begin(9600);
  pinMode(12, INPUT);
}
void loop(){
  val=digitalRead(12);
  if(val==1)
  {
    Serial.write("|12|34|1100|");
    Serial.write(0x0D);
    delay(2000);
  }
}
