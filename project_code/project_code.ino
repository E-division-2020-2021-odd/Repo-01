void setup()
{
  Serial.begin(9600);
 pinMode(12,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(9,OUTPUT);
 pinMode(2,INPUT);
 pinMode(3,INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
 
  /*do
  {
    
   digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
   
  }while(digitalRead(3) == 1);
 do
 {

  Serial.println("enter");
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
//digitalWrite(8,HIGH);
 // digitalWrite(9,LOW);
  
 
  delay(2000);

  
}while(digitalRead(3) == 0);*/

if(digitalRead(2)==0)
{
  digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
                                    
    if(digitalRead(3)==0&& digitalRead(2)!=0)
{
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  delay(2000);

  digitalWrite(8,HIGH);
    digitalWrite(9,LOW);

    delay(1000);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);

    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    delay(1000);

    if(digitalRead(3) == 1)
    {
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  }
}


}
/*
if(digitalRead(3)==0&& digitalRead(2)!=0)
{
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);

  digitalWrite(8,HIGH);
    digitalWrite(9,LOW);

    delay(2000);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);

    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    delay(2000);

}

8*/
}
