#include "Arduino.h"
#include "KodegenetKortet.h"

KodegenetKortet::KodegenetKortet(int tja) {
    _tja=tja;
    _ena = 11;
    _enb = 10;
    _in1=13;
    _in2=12;
    _in3=8;
    _in4=9;
    _trig = 2;
    _echo = 3;
    _tx=5;
    _rx=6;

    pinMode(_ena,OUTPUT);
    pinMode(_enb,OUTPUT);
    pinMode(_in1,OUTPUT);
    pinMode(_in2,OUTPUT);
    pinMode(_in3,OUTPUT);
    pinMode(_in4,OUTPUT);

    pinMode(_trig,OUTPUT);
    pinMode(_echo,INPUT);
}

void KodegenetKortet::forward(int speed, int millis) {
    digitalWrite(_in1,HIGH);
    digitalWrite(_in2,LOW);
    analogWrite(_ena,speed);

    digitalWrite(_in3,HIGH);
    digitalWrite(_in4,LOW);
    analogWrite(_enb,speed);

    delay(millis);
}

void KodegenetKortet::backward(int speed, int millis) {
    digitalWrite(_in2,HIGH);
    digitalWrite(_in1,LOW);
    analogWrite(_ena,speed);

    digitalWrite(_in4,HIGH);
    digitalWrite(_in3,LOW);
    analogWrite(_enb,speed);
    
    delay(millis);
}

void KodegenetKortet::right(int speed, int millis) {
    digitalWrite(_in1,HIGH);
    digitalWrite(_in2,LOW);
    analogWrite(_ena,speed);

    digitalWrite(_in4,HIGH);
    digitalWrite(_in3,LOW);
    analogWrite(_enb,speed);

    delay(millis);
}

void KodegenetKortet::left(int speed, int millis) {
    digitalWrite(_in2,HIGH);
    digitalWrite(_in1,LOW);
    analogWrite(_ena,speed);

    digitalWrite(_in3,HIGH);
    digitalWrite(_in4,LOW);
    analogWrite(_enb,speed);

    delay(millis);
}

void KodegenetKortet::stop(int millis) {
    digitalWrite(_in2,LOW);
    digitalWrite(_in1,LOW);
    analogWrite(_ena,0);

    digitalWrite(_in3,LOW);
    digitalWrite(_in4,LOW);
    analogWrite(_enb,0);

    delay(millis);
}
void KodegenetKortet::hei() {
    Serial.begin(9600);
    Serial.println("Hei");
}