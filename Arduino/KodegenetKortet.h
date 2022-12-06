#ifndef KodegenetKortet_h
#define KodegenetKortet_h
#include "Arduino.h"

class KodegenetKortet {
    public:
        KodegenetKortet(int tja);
        void forward(int speed, int millis);
        void backward(int speed, int millis);
        void right(int speed, int millis);
        void left(int speed, int millis);
        void stop(int millis);
        void hei();
    private:
        int _ena;
        int _enb;
        int _in1;
        int _in2;
        int _in3;
        int _in4;
        int _trig;
        int _echo;
        int _tx;
        int _rx;
        int _tja;
};
#endif