#define a 8
#define b 9
#define c 11
#define d 12
#define e 13
#define f 7
#define g 6

char reading;
void zero(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
 digitalWrite(g,1);}
void one (){
digitalWrite(a,1);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
 digitalWrite(g,1);
}
void two(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,1);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,1);
digitalWrite(g,0);
}
 void three (){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,0);
 }
 void four(){
digitalWrite(a,1);   
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,0);
 }
 void five(){
digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,0);
}
void six(){
digitalWrite(a,0);
digitalWrite(b,1);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);}
void seven(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,1);
digitalWrite(e,1);
digitalWrite(f,1);
digitalWrite(g,1);}
void eight(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,0);
digitalWrite(f,0);
digitalWrite(g,0);
}
void nine(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(d,0);
digitalWrite(e,1);
digitalWrite(f,0);
digitalWrite(g,0);
}
void off(){
digitalWrite(a,0);
digitalWrite(b,0);
digitalWrite(c,0);
digitalWrite(e,0);
digitalWrite(d,0);
digitalWrite(f,0);
digitalWrite(g,0);
}
void setup()
{
  Serial.begin(9600);
 
    pinMode(a, OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop()
{
  if(Serial.available()>0){
    reading=Serial.read();
    switch(reading){
      case '0':zero(); break;
      case '1':one(); break;
      case '2':two(); break;
      case '3':three(); break;
      case '4':four(); break;
      case '5':five(); break;
      case '6':six(); break;
      case '7':seven(); break;
      case '8':eight(); break;
      case '9':nine(); break;
      default: off(); break;
    }
  }
}