int irUpdate()
{int sum=0;
  
  readSensor();
  sum=s[0]+s[1]+s[2]+s[3]+s[4]+s[5]+s[6];
  //Serial.print("SUM= ");
  //Serial.println(sum);
  return sum;
}
