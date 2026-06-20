//Declaring all global variables
int startValue = 5;
int ledPin=13;

//Creating and defining function flashLED() that blinks the LED a specific number of times
void  flashLED(int times){
int blink=0;

while(blink<times){
digitalWrite(ledPin,HIGH); 
delay(200);
digitalWrite(ledPin,LOW);
delay(200);

blink++;

}

}
void setup() {

Serial.begin(9600);
pinMode(ledPin,OUTPUT);

Serial.println("===Smart Countdown Starting===");
//Starting countdown 
while(startValue>0){
Serial.print("Count: ");  
Serial.println(startValue);

flashLED(startValue);
delay(1000);
startValue--;
}
Serial.println("===Countdown Complete===");
}

void loop() {
 
}
