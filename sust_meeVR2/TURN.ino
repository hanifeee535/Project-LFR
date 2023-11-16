void hardBreak()
{
  digitalWrite(inA,HIGH);
  digitalWrite(inB,HIGH);
  digitalWrite(inC,HIGH);
  digitalWrite(inD,HIGH);
}
void seiram_break()
{
  hardBreak();
  wheel(100, 100); delay(30);
  wheel(-255, -255);
  delay(30);
  stop();
}

void stop()
{
  //  wheel(-200, -200);
  //  delay(50);
  wheel(0, 0);
  delay(50);
}



void RightTurn() {
 // blindRight90();
  while (analogRead(A4) < th[5]) {
    wheel(100, -100);
  }
  wheel(-100,100);
  delay(20);
  irUpdate();
 
}

void LeftTurn() {
  //blindLeft90();
  while (analogRead(A2) < th[2]) {
    wheel(-100, 100);

  }
  wheel(100,-100);
  delay(20);
  irUpdate();
 
}


void blindLeft90() {
 
  
  {
    wheel(-100, 100);
    delay(300);


  }
}

void blindRight90() {

 

  {
    wheel(100, -100);
    delay(300);

  }
}



void motor_test()
{
  wheel(200,200);
  delay(2000);
  wheel(0,0);
  delay(1000);

  wheel(200,-200);
  delay(2000);
  wheel(0,0);
  delay(1000);

  wheel(-200,200);
  delay(2000);
  wheel(0,0);
  delay(1000);

  wheel(-200,-200);
  delay(2000);
  wheel(0,0);
  delay(1000);
}
