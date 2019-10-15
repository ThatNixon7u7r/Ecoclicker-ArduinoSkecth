int MQinput = A0,i,x;

void setup() {
  Serial.begin(9600);
}

void loop() {
  i=analogRead(MQinput);
  if(i<=50){
    x=50;
  }else if(i>50&&i<=100){
    x=100;
  }else if(i>100&&i<=150){
    x=150;
  }else if(i>150&&i<=200){
    x=200;
  }else if(i>200&&i<=250){
    x=250;
  }else if(i>250&&i<=300){
    x=300;
  }else if(i>300){
    x=350;
  }
  Serial.println(x);
}
