#include "../../uCtrl/uCtrl.h"

//============================================
// Managed Devices Setup
//============================================

// Display device
//U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

// Midi device
// initing midi devices
MIDI_CREATE_INSTANCE(HardwareSerial, Serial, MIDI1);
MIDI_CREATE_INSTANCE(HardwareSerial, Serial3, MIDI2);
//MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI3);
//MIDI_CREATE_INSTANCE(HardwareSerial, Serial2, MIDI4);
#define USE_MIDI1
#define USE_MIDI2
//#define USE_MIDI3
//#define USE_MIDI4

//============================================
// Aciduino Features Setup
//============================================

// make use of bpm led?
// change for another pin if use any spi module
#define USE_BPM_LED       LED_BUILTIN
// main navigation
// choose you changer! only one please...
#define USE_CHANGER_POT
//#define USE_CHANGER_ENCODER

// wich modules you need acidman?
//#define USE_PUSH_8      // uses 165 shiftregister (buttons)
//#define USE_PUSH_24     // uses 3x 165 shiftregister
//#define USE_PUSH_32     // uses 4x 165 shiftregister
//#define USE_LED_8       // uses 595 shiftregister
//#define USE_LED_24      // uses 3x 595 shiftregister
//#define USE_POT_8       // uses 4051 multiplexer
//#define USE_POT_16      // uses 2x 4051 multiplexer
//#define USE_TOUCH_32    // uses 2x 4067 multiplexer

#if defined (USE_POT_8) || defined (USE_POT_16)
  #define LEARN_ENABLED
#endif

//============================================
// PINOUT Setup
//============================================

// going to use changer encoder?
#define NAV_ENCODER_DEC_PIN       26
#define NAV_ENCODER_INC_PIN       28

// or use changer pot?
#define CHANGER_POT_PIN           A8

#define NAV_SHIFT_PIN             13

#define NAV_FUNCTION1_PIN         12
#define NAV_FUNCTION2_PIN         11
#define NAV_GENERAL1_PIN          10
#define NAV_GENERAL2_PIN          6
#define NAV_RIGHT_PIN             5
#define NAV_UP_PIN                4
#define NAV_DOWN_PIN              3
#define NAV_LEFT_PIN              2

#define TRANSPORT_BUTTON_1_PIN    7
