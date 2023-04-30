#define trigPin 7
#define echoPin 6
#define LEDlampRed 9
#define LEDlampYellow 10
#define LEDlampGreen 11
#define buzzer 3
#define Rec A0
#define Laser 5
int sound = 5000;
bool detection;
int sens;

void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(LEDlampRed, OUTPUT);
pinMode(LEDlampYellow, OUTPUT);
pinMode(LEDlampGreen, OUTPUT);
pinMode(buzzer, OUTPUT);
pinMode(Laser,OUTPUT);
pinMode(A0,INPUT);
}
void loop() {

//short Detect = analogRead(Rec);
sens=analogRead(A0);
long durationindigit, distanceincm;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
Serial.println(sens);
durationindigit = pulseIn(echoPin, HIGH);
distanceincm = (durationindigit/5) / 29.1;
digitalWrite(Laser,1); 
if(sens < 150)
{                       //The Max value is 760, if someone passes it goes below that (every value lower than 700 can do the work)
detection = true;          //The detection is triggered
}
if(detection==true)
{
tone(buzzer,sound); //Alarm sequence will go on as long as the detection is true
delay(50);            //This alarm has two sounds 2kHz nd 1Khz delayed by 50ms
tone(buzzer,sound);
delay(50);
}

digitalWrite(LEDlampGreen, LOW);
digitalWrite(LEDlampYellow, HIGH);
digitalWrite(LEDlampRed, HIGH);

if (distanceincm < 20) {
digitalWrite(LEDlampGreen, HIGH);
}
else {
digitalWrite(LEDlampGreen, LOW);
}

if (distanceincm < 10) {
digitalWrite(LEDlampYellow, HIGH);
}
else {
digitalWrite(LEDlampYellow,LOW);
}
if (distanceincm < 5) {
digitalWrite(LEDlampRed, HIGH);
sound = 1000;
}
else {
digitalWrite(LEDlampRed,LOW);
}

if (distanceincm > 5 || distanceincm <= 0){
Serial.println("Outside the permissible range of distances");
noTone(buzzer);
}
else {
Serial.print(distanceincm);
Serial.println("cm");
tone(buzzer, sound);
}

delay(300);
}