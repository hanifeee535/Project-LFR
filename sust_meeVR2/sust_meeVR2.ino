


#define inA 3
#define inB 4
#define inC 5
#define inD 6
#define ena 7
#define enb 2

int stop_delay=0;

int th[7]={400,400,400,400,400,400,400};


int led[7]={44,45,46,47,48,49,50};
void wheel(int lm, int rm);

int i, sen[7],s[7], lastSensor,lastError=0;

int base_L=110;
int base_R=110;
int kp=4;
int kd=4;
void setup()
{
  
  mot_init();
  other_init();
delay(30);
}


void other_init()
{
  for(i=0;i<7;i++) pinMode(led[i],OUTPUT);
  lastSensor=0;
  lastError=0;
  Serial.begin(9600);
}

void mot_init()
{
  pinMode(inA,OUTPUT);
  pinMode(inB,OUTPUT);
  pinMode(inC,OUTPUT);
  pinMode(inD,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
  
  digitalWrite(inA,HIGH);
  digitalWrite(inB,HIGH);
  digitalWrite(inC,HIGH);
  digitalWrite(inD,HIGH);
}


void loop()
{
  //motor_test();
 line_follow();
  //motor_test();
}
