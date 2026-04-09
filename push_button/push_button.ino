#define my_led1 2
 #define my_led2 4
 #define  button1 8
 #define button2 12
void setup() {
  Serial.begin(9600); 
  pinMode(my_led1,OUTPUT);
  pinMode(my_led2,OUTPUT);   //LED

  
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);

  
   //                                         )
  // put your setup code here, to run once:

}

void loop() {
   
   bool x = digitalRead(button1);
   bool y = digitalRead(button2);
if( x==1 )
{
digitalWrite(my_led1, HIGH);
Serial.print("led1 turn ON");
digitalWrite(my_led2, LOW);
  Serial.print("led2 turn OFF");
}
 
    else if (y == 1) {
 digitalWrite(my_led1, HIGH);
Serial.print("led1 turn ON");
digitalWrite(my_led2, LOW);
Serial.print("led turn OFF");


}
 else{
  digitalWrite(my_led1, LOW);
Serial.println("led turn OFF");
digitalWrite(my_led2, LOW);
Serial.println("led turn OFF");
 }

 }
  // put your main code here, to run repeatedly:


