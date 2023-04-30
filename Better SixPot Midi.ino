#include <Control_Surface.h>

// instantiate interface: Hairless for serial interpretation, USBMIDI for flashed usb over midi setup
HairlessMIDI_Interface midi;

// initialize all 6 potentiometers
CCPotentiometer pots[] {
  { A0, {55, CHANNEL_1} }, //OSC2 pitch
  { A1, {54, CHANNEL_1} }, //OSC1 pitch
  { A2, {72, CHANNEL_1} }, //amp release
  { A3, {73, CHANNEL_1} }, //amp attack
  { A4, {42, CHANNEL_1} }, //resonance (OB-XD)
  { A5, {74, CHANNEL_1} }, //cutoff
};
  


void setup() {
  // initialize control surface
  Control_Surface.begin();
  
}

void loop() {
  // continuously update the interface with data
  Control_Surface.loop();
  

}
