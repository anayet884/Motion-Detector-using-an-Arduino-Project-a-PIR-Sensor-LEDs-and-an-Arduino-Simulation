int swtch=8;
int buzz=11;

void setup() {
  pinMode(swtch,INPUT);
  pinMode(buzz,OUTPUT);

}

void loop() {
  int m=digitalRead(swtch);
  if(m==HIGH)
    {tone(buzz,6000);}

else
    {noTone(buzz);}
    

}
