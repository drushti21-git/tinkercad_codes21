#define my_led1 7
#define my_led2 4
  #define my_led3 5 //green led


   void setup() {
 
 pinMode( my_led1,OUTPUT);
     pinMode( my_led2 ,OUTPUT);
     pinMode( my_led3 ,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  
  
  digitalWrite(my_led1 ,HIGH);
  digitalWrite(my_led2 ,LOW);
  digitalWrite(my_led3 ,LOW);
  Serial.print("LED1 Turn ON");
  delay(1000);
  
  digitalWrite(my_led1,HIGH);
 digitalWrite(my_led2  ,LOW);
   digitalWrite(my_led3 ,LOW);
  
  Serial.print("LED1 Turn OFF");
  delay(1000);
  
  digitalWrite(my_led1,LOW);
  digitalWrite(my_led2,HIGH);
  digitalWrite(my_led3,LOW);
  Serial.print("LED2 TURN ON");
  
   digitalWrite(my_led1,LOW);
 digitalWrite(my_led2  ,HIGH);
   digitalWrite(my_led3 ,LOW);
  
  Serial.print("LED2 Turn OFF");
  delay(1000);
  
   digitalWrite(my_led1,LOW);
  digitalWrite(my_led2,LOW);
  digitalWrite(my_led3,HIGH);
  Serial.print("LED3 TURN ON");
  
   digitalWrite(my_led1,LOW);
 digitalWrite(my_led2  ,LOW);
   digitalWrite(my_led3 ,HIGH);
  
  Serial.print("LED3 Turn OFF");
  delay(1000);
}
  
  
  
  
  
  
  

