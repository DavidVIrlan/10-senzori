 // ---------------------------------------------------------------- //
// Arduino Ultrasoninc Sensor HC-SR04
// Re-writed by Arbi Abdul Jabbaar
// Using Arduino IDE 1.8.7
// Using HC-SR04 Module
// Tested on 17 September 2019
// ---------------------------------------------------------------- //

#define echoPin1 62 // attach pin D2 Arduino to pin Echo of HC-SR04  //sensor 1
#define trigPin1 63 //attach pin D3 Arduino to pin Trig of HC-SR04 

#define echoPin2 6 //sensor 2
#define trigPin2 7

#define echoPin3 4 //sensor 3
#define trigPin3 5

#define echoPin4 2 //sensor 4
#define trigPin4 3

#define echoPin5 8 //sensor 5 
#define trigPin5 9

#define echoPin6 11 //sensor 6
#define trigPin6 10

#define echoPin7 57 //sensor 7
#define trigPin7 56

#define echoPin8 12 //sensor 8
#define trigPin8 13

#define echoPin9 59 //sensor 9
#define trigPin9 58

#define echoPin10 60 //sensor 10
#define trigPin10 61

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

long duration2;
int distance2;

long duration3;
int distance3;

long duration4;
int distance4;

long duration5;
int distance5;

long duration6;
int distance6;

long duration7;
int distance7;

long duration8;
int distance8;

long duration9;
int distance9;

long duration10;
int distance10;

long volume;

void setup() {
  pinMode(trigPin1, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin1, INPUT); // Sets the echoPin as an INPUT
  
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);
  
  pinMode(trigPin5, OUTPUT);
  pinMode(echoPin5, INPUT);
  
  pinMode(trigPin6, OUTPUT);
  pinMode(echoPin6, INPUT);
  
  pinMode(trigPin7, OUTPUT);
  pinMode(echoPin7, INPUT);
  
  pinMode(trigPin8, OUTPUT);
  pinMode(echoPin8, INPUT);
  
  pinMode(trigPin9, OUTPUT);
  pinMode(echoPin9, INPUT);
  
  pinMode(trigPin10, OUTPUT);
  pinMode(echoPin10, INPUT);
    
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);

  
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds

  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);
  
 
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin1, HIGH);
  // Calculating the distance
  
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
   
  Serial.print("Distance 1: ");
  Serial.print(distance);
  Serial.println(" cm");


  // sensor 2
  digitalWrite(trigPin2, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);

  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = duration2 * 0.034 / 2;

  Serial.print("Distance 2: ");
  Serial.print(distance2);
  Serial.println(" cm");

  // sensor 3
  
  digitalWrite(trigPin3, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin3, LOW);

  duration3 = pulseIn(echoPin3, HIGH);
  distance3 = duration3 * 0.034 / 2;
  
  Serial.print("Distance 3: ");
  Serial.print(distance3);
  Serial.println(" cm");


  // sensor 4
  
  digitalWrite(trigPin4, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin4, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin4, LOW);

  duration4 = pulseIn(echoPin4, HIGH);
  distance4 = duration4 * 0.034 / 2;

  Serial.print("Distance 4: ");
  Serial.print(distance4);
  Serial.println(" cm");

  // sensor 5
  digitalWrite(trigPin5, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin5, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin5, LOW);

  duration5 = pulseIn(echoPin5, HIGH);
  distance5 = duration5 * 0.034 / 2;

  Serial.print("Distance 5: ");
  Serial.print(distance5);
  Serial.println(" cm");

  // sensor 6

  digitalWrite(trigPin6, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin6, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin6, LOW);

  duration6 = pulseIn(echoPin6, HIGH);
  distance6 = duration6* 0.034 / 2;

  Serial.print("Distance 6: ");
  Serial.print(distance6);
  Serial.println(" cm");
  
  // sensor 7
  
  digitalWrite(trigPin7, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin7, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin7, LOW);

  duration7 = pulseIn(echoPin7, HIGH);
  distance7 = duration7 * 0.034 / 2;

  Serial.print("Distance 7: ");
  Serial.print(distance7);
  Serial.println(" cm");

  //sensor 8
 
  digitalWrite(trigPin8, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin8, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin8, LOW);

  duration8 = pulseIn(echoPin8, HIGH);
  distance8 = duration8 * 0.034 / 2;
  
  Serial.print("Distance 8: ");
  Serial.print(distance8);
  Serial.println(" cm");

  //sensor 9
  digitalWrite(trigPin9, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin9, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin9, LOW);

  duration9 = pulseIn(echoPin9, HIGH);
  distance9 = duration9 * 0.034 / 2;

  Serial.print("Distance 9: ");
  Serial.print(distance9);
  Serial.println(" cm");

  //senor 10
  
  digitalWrite(trigPin10, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin10, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin10, LOW);

  duration10 = pulseIn(echoPin10, HIGH);
  distance10 = duration10 * 0.034 / 2;

  Serial.print("Distance 10: ");
  Serial.print(distance10);
  Serial.println(" cm");

  Serial.print("Volume: ");
  /*volume = distance * distance2;
  volume = volume * 25; */

  Serial.println(volume);
 
  float fwidth;
  int obj = 0;
  if(distance5 < 29 || distance8 < 29)
  {
    Serial.print("Object inserted has: ");
    obj = 1;
    float width1 = 29 - (distance5 + distance8);
    Serial.print(width1);
    Serial.print(" cm in width and occupies ");
    Serial.print((width1*100) / 29 );
    Serial.println(" % of the box width");
    fwidth = width1;
  }
  
  if (distance6 < 29 || distance9 < 29)
  {
    float width2 = 31 - (distance6 + distance9);
    obj = 1;
    Serial.print("Object inserted has: ");
    Serial.print(width2);
    Serial.print(" cm in width and occupies ");
    Serial.print((width2*100) / 31 );
    Serial.println(" % of the box width.");
    fwidth = width2;
  }
  if (distance7 < 29 || distance10 < 29)
  {
    float width3 = 31 - (distance7 + distance10);
    obj = 1;
    Serial.print("Object inserted has: ");
    Serial.print(width3);
    Serial.print(" cm in width and occupies ");
    Serial.print((width3*100) / 31 );
    Serial.println(" % of the box width.");
    fwidth = width3;
  }
  if (obj == 1)
  {
    float high = 0;
    if(distance4 < 29){
      high = 4.5;
      if(distance3<29){
        high = 9.5;
        if(distance2<29){
          high = 14.5;
          if(distance<29){
            high = 19;
          }
        }
      }
    }
    double lenght = 0;
    if(distance7 < 29){
      lenght = 11;
      if(distance6 < 29){
        lenght = 17;
        if(distance4 < 29){
          lenght = 24;
          if(distance5 < 29){
            lenght = 33;
          }         
        }
      }
    }else if(distance6 < 29){
      lenght = 6;
      if(distance4 < 29){
        lenght = 13;
        if(distance5 < 29){
          lenght = 22;
        }    
      }
    }else if(distance4 < 29){
      lenght = 7;
      if(distance5 < 29){
        lenght = 16;
      }
    }else if(distance5 < 29){
      lenght = 9;
    }
    double volume = lenght*fwidth*high;
    Serial.println(volume);
  }
  
  
  
  Serial.println(" ");
  delay(3000); 
} 
