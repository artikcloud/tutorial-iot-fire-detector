// Delay between reads
const int delayBetweenReads = 5000;//5s

// For flame detector sensor
const int flameDigitalPinIn = 2; 

void setup() {
  // initialize serial communication @ 9600 baud:
  Serial.begin(9600);
  pinMode(flameDigitalPinIn, INPUT);
}

void loop() {
  // HIGH(1) means no fire is detected
  // LOW (0) means fire is detected
  int flameDigitalReading = digitalRead(flameDigitalPinIn);
  
  Serial.println(String(flameDigitalReading));

  delay(delayBetweenReads);
}
