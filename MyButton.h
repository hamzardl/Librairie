#ifndef MyButton_H
#define MyButton_H

class MyButton
{
    #define MYBUTTON_NO_CLICK 0 
    #define MYBUTTON_SHORT_CLICK 2 
    #define MYBUTTON_LONG_CLICK 3 
    #define MYBUTTON_DOUBLE_CLICK 4 
    const bool beginningState=false;
    private :
        int buttonGPIO;
        int buttonDebounceDelay;
        int buttonLongPressDuration;
        int buttonDoubleClickMaxDelay;
        bool isPressed;
        bool lastRawState;
        unsigned long lastDebounceTime;
        unsigned long pressStart;
        unsigned long lastReleaseTime;
        bool waitingSecondClick;
        bool pendingSingleClick;
    public:
       MyButton(int gpioNumber,int typebouton);
       void setButtonDebounceDelay(int DebounceDelay);
       void setButtonLongPressDuration(int longPressDuration);
       void setButtonDoubleClickMaxDelay(int doubleClickMxDelay);
       int checkMyButton();
    }; 
#endif
