#include <Servo.h>

#include <KodegenetKortet.h>
#include <Servo.h>

KodegenetKortet bil(7);
Servo s1,s2,s3;

void setup() {
  // put your setup code here, to run once:
  int speed = 100;
  int millis = 10;
  bil.hei();
  s1.attach(5);
  s2.attach(4);
  s3.attach(7);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*bil.forward(200,2000);
  bil.backward(200,2000);
  bil.right(200,2000);
  bil.left(200,2000);
  bil.stop(2000);
  */s1.write(0);
  s2.write(0);
  s3.write(0);
  delay(1000);
  s1.write(180);
  s2.write(180);
  s3.write(180);
  delay(2000);
  s1.write(0);
  s2.write(0);
  s3.write(0);
  delay(2000);
}
