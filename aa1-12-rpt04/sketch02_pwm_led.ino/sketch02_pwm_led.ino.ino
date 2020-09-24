int pwm=0;
int led=3;//D3

void setup() {
  // 아날로그 출력에서 핀모드 설정이 필요없다.
}

void loop() {

pwm=random(0.255);
pwmLed(led.pwm);
}

void pwmLed(int led, int pwmValue){

  analogWrite(led, pwmValue);
  delay(10);
}
