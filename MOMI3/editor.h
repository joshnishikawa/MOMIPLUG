#ifndef editor_h
#define editor_h

#include "Arduino.h"
#include "SevSeg.h"
#include "MIDIcontroller.h"
extern byte MIDIchannel;
extern SevSeg DSP;

class Editor{
    int quadOne(byte val, byte max);
    char DSPstring[5];
    byte DP;
  public:
    Editor();
    Editor(int a, int b, int p);
    ~Editor();
    Bounce* bounce;
    Encoder* encoder;
    int number;
    int level;
    bool editing;
    int target;
    int newInLo, newInHi, touchLo, touchHi;
    byte editChannel();
    bool setAnalog(int p);
    bool setTouch(int p);
    int send(); //cuz interrupts won't let two objects use the same encoder pins
};
#endif

