int startvalue = 5;
int ledpin = 13;
void FlashLED(int times){
  int i=0;
  while(i<times) {
   // THIS BLINKS THE LED FOR 0.35 SECONDS
    digitalWrite(ledpin, HIGH);
    delay(350);
    digitalWrite(ledpin, LOW);
    delay(350);
    i++;

  }
}



void setup() { // put your setup code here, to run once:
 
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
  Serial.println();
  Serial.println("===Smart countdown Application===");
  int count=startvalue;
  while(count>0){
    Serial.print("Count: ");
    Serial.println(count);
    FlashLED(count);  //BLINK THE LED
    delay(1000);      //WAITS FOR 1 SECOND EACH TIME
    count--;

  }
  Serial.println("=== Countdown complete === ");
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  


}
