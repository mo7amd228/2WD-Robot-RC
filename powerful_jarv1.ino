// C++ code
//
int IN1=13;
int IN2=12 ;
int SPEED1=11;
int IN3=9 ;
int IN4=8 ;
int SPEED2=7;
char input;

void setup()
{
  Serial.begin(9600);
  pinMode(IN1,OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(SPEED1, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(SPEED2, OUTPUT);
}

void loop()
 {
  if (Serial.available() > 0)
  {
    char input = Serial.read();

    Serial.println(input);
    
  switch (input)
  {
    case 'F':   
      digitalWrite(IN1, 1);
      digitalWrite(IN2, 0);
      digitalWrite(IN3, 1);
      digitalWrite(IN4, 0);
      break;
    case 'B':   
      digitalWrite(IN1, 0);
      digitalWrite(IN2, 1);
      digitalWrite(IN3, 0);
      digitalWrite(IN4, 1);
      break;
    case 'L':   
      digitalWrite(IN1, 0);
      digitalWrite(IN2, 0);
      digitalWrite(IN3, 1);
      digitalWrite(IN4, 0);
      break;
    case 'R':   
      digitalWrite(IN1, 1);
      digitalWrite(IN2, 0);
      digitalWrite(IN3, 0);
      digitalWrite(IN4, 0);
      break;
    case 'S':  
      digitalWrite(IN1, 0);
      digitalWrite(IN2, 0);
      digitalWrite(IN3, 0);
      digitalWrite(IN4, 0);
      break;
  }
  }
}



