void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// Specific LED pattern to indicate start of loop
void iterateSignal() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);                       
  digitalWrite(LED_BUILTIN, LOW);
  delay(250);
}

void morseCode(char message[]) {
  for(int i=0; i<strlen(message); i++) {
    switch(message[i]) {
      case 'a':
        pulseShort();
        pulseLong();
        break;
      
      case 'b':
        pulseLong();
        pulseShort();
        pulseShort();
        pulseShort();
        break;
      
      case 'c':
        pulseLong();
        pulseShort();
        pulseLong();
        pulseShort();
        break;
        
      case 'd':
        pulseLong();
        pulseShort();
        pulseShort();
        break;

      case 'e':
        pulseShort();
        break;

      case 'f':
        pulseShort();
        pulseShort();
        pulseLong();
        pulseShort();
        break;

      case 'g':
        pulseLong();
        pulseLong();
        pulseShort();
        break;

      case 'h':
        pulseShort();
        pulseShort();
        pulseShort();
        pulseShort();
        break;

      case 'i':
        pulseShort();
        pulseShort();
        break;

      case 'j':
        pulseShort();
        pulseLong();
        pulseLong();
        pulseLong();
        break;

      case 'k':
        pulseLong();
        pulseShort();
        pulseLong();
        break;

      case 'l':
        pulseShort();
        pulseLong();
        pulseShort();
        pulseShort();
        break;

      case 'm':
        pulseLong();
        pulseLong();
        break;

      case 'n':
        pulseLong();
        pulseShort();
        break;

      case 'o':
        pulseLong();
        pulseLong();
        pulseLong();
        break;

      case 'p':
        pulseShort();
        pulseLong();
        pulseLong();
        pulseShort();
        break;

      case 'q':
        pulseLong();
        pulseLong();
        pulseShort();
        pulseLong();
        break;

      case 'r':
        pulseShort();
        pulseLong();
        pulseShort();
        break;

      case 's':
        pulseShort();
        pulseShort();
        pulseShort();
        break;

      case 't':
        pulseLong();
        break;

      case 'u':
        pulseShort();
        pulseShort();
        pulseLong();
        break;

      case 'v':
        pulseShort();
        pulseShort();
        pulseShort();
        pulseLong();
        break;

      case 'w':
        pulseShort();
        pulseLong();
        pulseLong();
        break;

      case 'x':
        pulseLong();
        pulseShort();
        pulseShort();
        pulseLong();
        break;

      case 'y':
        pulseLong();
        pulseShort();
        pulseLong();
        pulseLong();
        break;

      case 'z':
        pulseLong();
        pulseLong();
        pulseShort();
        pulseShort();
        break;
    }
  }
}

void pulseLong() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(750);                       
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

void pulseShort() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(250);
  digitalWrite(LED_BUILTIN, LOW);
  delay(100);
}

void loop() {
  char message[] = "HelloWorld";
  morseCode(message);
}
