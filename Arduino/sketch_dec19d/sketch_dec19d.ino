int piezo = 8;
int tones[]={587, 659, 784, 784, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 784, 784, 740, 740, 0, 587, 659, 784, 784, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 784, 784, 740, 740, 0, 587, 659, 784, 784, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 784, 784, 740, 740, 0, 587, 659, 784, 784, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 784, 784, 740, 740, 0, 587, 659, 784, 784, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 784, 784, 740, 740, 0, 587, 659, 784, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 587, 659, 784, 0, 784, 784, 784, 784, 784, 784, 784, 784, 740, 740, 0};
int beats[]={10, 10, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 10, 10, 10, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 10, 10, 10, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 10, 10, 10, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 10, 10, 10, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 10, 10, 10, 10, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 5, 2.5, 2.5, 2.5, 2.5, 5, 5, 5, 5, 5, 10};
int tempo=100;
void setup() {

}

void loop() {
  // tone(핀번호, 진동수, 지속시간)
  for(int i = 0; i<sizeof(beats)/sizeof(int); i++){
   tone(piezo, tones[i]);
    delay(tempo/2*beats[i]);
  }
}