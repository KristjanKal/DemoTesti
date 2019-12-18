#define LED 5
#define PAINIKE 6

void setup(){
 pinMode(LED, OUTPUT);
 pinMode(PAINIKE, INPUT_PULLUP);
 
  
}

void loop(){
 if(digitalRead(PAINIKE)==LOW){
   digitalWrite(LED, HIGH);
 }else{
   digitalWrite(LED, LOW);
 }
}
