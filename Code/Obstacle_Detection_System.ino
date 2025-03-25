int trigpin1 = 5; 
int echopin1 = 6; 

int trigpin2 = 9; 
int echopin2 = 10; 

int trigpin3 = 3; 
int echopin3 = 11; 

int Buzzpin = A0; 

void setup() { 
  Serial.begin(9600); 
  
  pinMode(trigpin1, OUTPUT);
  pinMode(echopin1, INPUT);

  pinMode(trigpin2, OUTPUT);
  pinMode(echopin2, INPUT);

  pinMode(trigpin3, OUTPUT);
  pinMode(echopin3, INPUT);

  pinMode(Buzzpin, OUTPUT); // Set buzzer as an output
  digitalWrite(Buzzpin, LOW); // Ensure the buzzer is off at start
} 

void setFreq(int freq, int delay1) { 
  tone(Buzzpin, freq);  // Use tone() function to generate sound
  delay(delay1); 
  noTone(Buzzpin);  // Stop tone
  delay(delay1); 
} 

void loop() { 
  long duration1, distance1; 
  digitalWrite(trigpin1, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigpin1, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigpin1, LOW); 
  duration1 = pulseIn(echopin1, HIGH); 
  distance1 = (duration1 / 2) / 29.1; 
  Serial.print("distance1: "); 
  Serial.println(distance1); 

  long duration2, distance2; 
  digitalWrite(trigpin2, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigpin2, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigpin2, LOW); 
  duration2 = pulseIn(echopin2, HIGH); 
  distance2 = (duration2 / 2) / 29.1; 
  Serial.print("distance2: "); 
  Serial.println(distance2); 

  long duration3, distance3; 
  digitalWrite(trigpin3, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigpin3, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigpin3, LOW); 
  duration3 = pulseIn(echopin3, HIGH); 
  distance3 = (duration3 / 2) / 29.1; 
  Serial.print("distance3: "); 
  Serial.println(distance3); 

  if ((distance1 >= 0 && distance1 <= 30) || 
      (distance2 >= 0 && distance2 <= 30) || 
      (distance3 >= 0 && distance3 <= 30)) { 
        
    long distance = min(min(distance1, distance2), distance3); 
    Serial.print("distance: "); 
    Serial.println(distance); 

    if (distance >= 0 && distance <= 5) { 
      setFreq(255, 50); 
    } 
    else if (distance > 5 && distance <= 10) { 
      setFreq(230, 150); 
    } 
    else if (distance > 10 && distance <= 15) { 
      setFreq(205, 250); 
    } 
    else if (distance > 15 && distance <= 20) { 
      setFreq(180, 350); 
    } 
    else if (distance > 20 && distance <= 25) { 
      setFreq(155, 450); 
    } 
    else { 
      setFreq(130, 550); 
    } 
  } 
  else { 
    digitalWrite(Buzzpin, LOW); // Turn off buzzer
  } 
}
