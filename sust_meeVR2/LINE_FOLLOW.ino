int line_follow()
{
  int sum;
  oneNzero();
sum= irUpdate();
  int error, p, d, corr;
  delay(5);
  error = readSensor();

 //stop_delay=millis()
if((s[0]==1 && s[1]==1 && s[2]== 1 && s[3]== 1 && s[4]==1 && s[5]==1 && s[6]==1)||
(s[0]==0 && s[1]==1 && s[2]== 1 && s[3]== 1 && s[4]==1 && s[5]==1 && s[6]==1)||
(s[0]==1 && s[1]==1 && s[2]== 1 && s[3]== 1 && s[4]==1 && s[5]==1 && s[6]==0))
{
  wheel(100,100);
  delay(100);
  seiram_break();
  delay(50);
  //RightTurn();
  readSensor();
  if((s[0]==1 && s[1]==1 && s[2]== 1 && s[3]== 1 && s[4]==1 && s[5]==1 && s[6]==1))
 { wheel(0,0);
  delay(5000);}
  
}

if((s[0]==0 && s[1]==0 && s[2]== 0 && s[3]== 1 && s[4]==1 && s[5]==1 && s[6]==1)||
(s[0]==0 && s[1]==0 && s[2]== 0 && s[3]== 0 && s[4]==1 && s[5]==1 && s[6]==1)||
(s[0]==0 && s[1]==0 && s[2]== 1 && s[3]== 1 && s[4]==1 && s[5]==1 && s[6]==1))
{
  wheel(80,80);
  delay(50);
  if(sum==0)
  {
    RightTurn();
  }
  
  else if (sum!=0)
  {
    blindRight90();
  }
}
if((s[0]==1 && s[1]==1 && s[2]== 1 && s[3]== 0 && s[4]==0 && s[5]==0 && s[6]==0)||
(s[0]==1 && s[1]==1 && s[2]== 1 && s[3]== 1 && s[4]==0 && s[5]==0 && s[6]==0)||
(s[0]==1 && s[1]==1 && s[2]== 1 && s[3]== 1 && s[4]==1 && s[5]==0 && s[6]==0))
{
  wheel(80,80);
  delay(50);
  if(sum==0)
  {
    LeftTurn();
  }
  
  else if (sum!=0)
  {
    blindLeft90();
  }
}
if(error==420)
{
  if(lastSensor==1){
    //delay(50);
    wheel(-100,100);
  }
  else if(lastSensor==2)
  {
    //delay(50);
    wheel(100,-100);
  }
}
else
     { p=kp*error;
   d=kd*(error-lastError);
   corr=p+d;
// Serial.println(corr);
   wheel(base_L+corr,base_R-corr);
  // if((error-lastError)!=0) delay(5);
   lastError=error;

    
   
}
}
