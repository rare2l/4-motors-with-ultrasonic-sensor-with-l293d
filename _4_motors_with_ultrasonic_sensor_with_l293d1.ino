

int trigger_pin = 6;
int echo_pin = 3;
int in1=2;
int in2=5;
;
int in3=10;
int in4=12;

int in5=4;
int in6=7;

int in7=8;
int in8=13;
int distance;

int time;


void setup()
{
  Serial.begin(9600);
  pinMode(trigger_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);
  
}
void loop(){
  
    digitalWrite (trigger_pin, HIGH);

    delayMicroseconds (10);

    digitalWrite (trigger_pin, LOW);

    time = pulseIn (echo_pin, HIGH);

    distance = (time * 0.034) / 2;
    if(distance >= 50){
          Serial.println("objection not  detected");
          Serial.print("Distance=");
          Serial.println(distance);
          digitalWrite(in1,HIGH);
          digitalWrite(in2,LOW);
          digitalWrite(in3,HIGH);
          digitalWrite(in4,LOW);
          
          
          digitalWrite(in5,HIGH);
          digitalWrite(in6,LOW);
          digitalWrite(in7,HIGH);
          digitalWrite(in8,LOW);
          
          delay(500);
    }
  
  else{
          Serial.println("objection  detected");
          Serial.print("Distance=");
          Serial.println(distance);
          digitalWrite(in1,LOW);
          digitalWrite(in2,LOW);
          digitalWrite(in3,HIGH);
          digitalWrite(in4,LOW);
          
          
          digitalWrite(in5,LOW);
          digitalWrite(in6,LOW);
          digitalWrite(in7,HIGH);
          digitalWrite(in8,LOW);
          
     
          
          delay(500);
  }
}

