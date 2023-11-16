void wheel(int lm, int rm)
{
  if(lm==0)
  {
    digitalWrite(inA,HIGH);
    digitalWrite(inB,HIGH);
  }
  if(lm>0)
  {
    digitalWrite(inA,HIGH);
    digitalWrite(inB,LOW);
  }
  else if(lm<0)
  {
    digitalWrite(inA,LOW);
    digitalWrite(inB,HIGH);
  }


  if(rm==0)
  {
    digitalWrite(inC,HIGH);
    digitalWrite(inD,HIGH);
  }
  if(rm>0)
  {
    digitalWrite(inC,HIGH);
    digitalWrite(inD,LOW);
  }
  else if(rm<0)
  {
    digitalWrite(inC,LOW);
    digitalWrite(inD,HIGH);
  }
  if(lm>254) lm=254;
  if(lm<-254) lm=-254;
  if(rm>254) rm=254;
  if(rm<-254) rm=-254;
  analogWrite(ena,abs(rm));
  analogWrite(enb,abs(lm));
  
}
