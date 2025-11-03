#define RADIO_PIN 3
#define BUZZ_PIN 8

void beep(int pin, int freq, int duration){
  tone(pin,freq);
  delay(duration);
}

void setup() {
 pinMode(RADIO_PIN, INPUT);
 pinMode(BUZZ_PIN, OUTPUT);
}

void loop() {
  beep(BUZZ_PIN,2048,250,1);
  noTone(BUZZ_PIN);
  delay(250);
}