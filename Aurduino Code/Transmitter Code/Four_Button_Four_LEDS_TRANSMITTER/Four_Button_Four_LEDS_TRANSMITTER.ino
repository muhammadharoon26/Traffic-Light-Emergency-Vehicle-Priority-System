#include <VirtualWire.h>

#define button 6
#define button1 7
#define button2 8
#define button3 9




char *data;

int val,val1,val2,val3;
int value = 0;
int value1 = 0;
int value2 = 0;
int value3 = 0;

void setup() 
{
  vw_set_tx_pin(12);
  vw_setup(2000);
  pinMode(button, INPUT_PULLUP);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
}

void loop()
{
  val = digitalRead(button);
  val1 = digitalRead(button1);
  val2 = digitalRead(button2);
  val3 = digitalRead(button3);

  if(val == LOW && value == 0)
  {
    data="a";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
  
    value = 1;
  }
  else if(val1 == LOW && value1 == 0)
  {
    data="b";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(500);
    value1 = 1;
  }
  else if(val2 == LOW && value2 == 0)
  {
    data="c";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(500);
    value2 = 1;
  }
  else if(val3 == LOW && value3 == 0)
  {
    data="d";
    vw_send((uint8_t *)data, strlen(data));
    vw_wait_tx();
    delay(500);
    value3 = 1;
  }
  

}