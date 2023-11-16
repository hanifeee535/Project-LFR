int readSensor()
{
  for(i=0;i<7;i++)
  { 
    sen[i]=analogRead(i);
    if(sen[i]<th[i])
    {
      s[i]=0;
      digitalWrite(led[i],LOW);
    }
    else { 
      s[i]=1;
      digitalWrite(led[i],HIGH);
    }
Serial.print(s[i]);
Serial.print("||");
 //Serial   
  }
  
  int error,sum;
  sum=s[0]+s[1]+s[2]+s[3]+s[4]+s[5]+s[6];
  if(sum!=0)
  {
    error=(s[0]*10+s[1]*20+s[2]*30+s[3]*40+s[4]*50+s[5]*60+s[6]*70)/sum-40;
  }
  
  else error = 420;
    
  
  if(s[0]==1) lastSensor=1;
  else if(s[6]==1) lastSensor =2;
  Serial.print("err=");
  Serial.println(error);
  return error;
 // delay(1000);
}
 
