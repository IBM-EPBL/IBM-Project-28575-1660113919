const int pingpin=4;
const int led = 13;
int baselineTemp = 0;
int celsius = 0;
int fahrenheit = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
   pinMode(2, OUTPUT);

}
void loop() {
  long duration, cm;
  pinMode(pingpin, OUTPUT);  
  digitalWrite(pingpin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(pingpin, LOW);
   pinMode(pingpin,INPUT);
    duration = pulseIn(pingpin, HIGH);
   cm = duration * 0.034 / 2;
   if(cm<100) {
   digitalWrite(led,HIGH);
   }
  else
   {
   digitalWrite(led,LOW);
   }
   
 
  // temp sensor
  baselineTemp = 40;
 
  celsius = map(((analogRead(A0) - 20) * 3.04), 0, 1023, -40, 125);
 
   fahrenheit = ((celsius * 9) / 5 + 32);
  Serial.print(celsius);
  Serial.print(" C, ");
  Serial.print(fahrenheit);
  Serial.println(" F");
 
  if (celsius < baselineTemp) {
    digitalWrite(2, LOW);}
  if (celsius >= baselineTemp && celsius < baselineTemp + 10) {
    digitalWrite(2, HIGH);}
  if (celsius >= baselineTemp + 10 && celsius < baselineTemp + 20) {
    digitalWrite(2, HIGH);}
   if (celsius >= baselineTemp + 20 && celsius < baselineTemp + 30) {
     digitalWrite(2, HIGH);}
  if (celsius >= baselineTemp + 30) {
    digitalWrite(2, HIGH);}
  delay(100);
}

