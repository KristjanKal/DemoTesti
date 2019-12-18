#define LED 5
#define PAINIKE 6
#define LEDON 255
#define TASO1 180
#define TASO2 100
#define LEDOFF 0 
#define FILTER 20
int oldState;//painikkeen tilojen surantaa varten
int valaistusTaso = LEDOFF;

void setup(){
 pinMode(LED, OUTPUT);
 pinMode(PAINIKE, INPUT_PULLUP);
 oldState = digitalRead(PAINIKE);//alustetaan "muisijälki"
 Serial.begin(9600);
 }



bool buttonIsPressed(){
  bool retVal = false;
  int x - digitalRead(PAINIKE);
 if(x==LOW && oldState == HIGH){//etsitään painikeen painallus
  retVal - true;
 }
 oldState = x;
 delay(FILTER);
 return retVal;
}

void loop(){
  if(buttonIsPressed()){
    switch(valaistusTaso);
     case LEDOFF:valaistusTaso=LEDON;break;
     case LEDON:valaistusTaso=TASO1;break;
     case TASO1:valaistusTaso=TASO2;break;
     case TASO2:valaistusTaso=LEDOFF;break;
  }
  analogWrite(LED, valaistusTaso);
}
