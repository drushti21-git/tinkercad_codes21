 #define pot A0
#define my_led 2



void setup(){
  pinMode (my_led, INPUT);
  Serial.begin(9600);

pinMode(pot , INPUT);
 Serial.begin(9600);

 // put your setup code here, to run once:

}

void loop() {
   int x = analogRead(pot);
   Serial.print("Pot Reading =");
 Serial.println(x);
  
  
    digitalWrite(my_led, LOW);
    Serial.print("LED TURN OFF");
  delay(1000);
                 
                 if (x> 0)
                 {
                   digitalWrite(my_led,HIGH);
                   Serial.print("LED TURN ON");
                   
                   
                 }
  else {
    digitalWrite(my_led,LOW);
    Serial.print("LED TURN ON");}
    delay(1000);
      
                

  
  
 
 
  // put your main code here, to run repeatedly:

}
