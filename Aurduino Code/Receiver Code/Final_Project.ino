#include <VirtualWire.h>
int lane1[]={1,2,3};
int lane2[]={4,5,6};
int lane3[]={7,8,9};
int lane4[]={10,11,13};
void setup() 
{
  // put your setup code here, to run once:
    //reciver file   
   vw_set_rx_pin(12);
    vw_setup(2000);
    vw_rx_start();
    //traffic lights
 for(int i=0; i<3; i++)
 {
 pinMode(lane1[i],OUTPUT);
 pinMode(lane2[i],OUTPUT);
 pinMode(lane3[i],OUTPUT);
 pinMode(lane4[i],OUTPUT);
 }
 for(int i=0; i<3; i++)
 {
   digitalWrite(lane1[i],LOW);
   digitalWrite(lane2[i],LOW);
   digitalWrite(lane3[i],LOW);
   digitalWrite(lane4[i],LOW);
 }
}

void loop() 
{
  // put your main code here, to run repeatedly:
  uint8_t buf[VW_MAX_MESSAGE_LEN];
  uint8_t buflen = VW_MAX_MESSAGE_LEN;
  //l1 green high 
digitalWrite(lane1[2],HIGH);
//lane 1
  if (vw_get_message(buf, &buflen)) 
  {
    if (buflen >= 1) 
    {
      switch (buf[0]) 
      {
        // case 'a':
        
        //   break;

        case 'b':
          digitalWrite(lane1[2],LOW);
          digitalWrite(lane1[1],HIGH);
          digitalWrite(lane2[1],HIGH);
          delay(2000);
          digitalWrite(lane1[1],LOW);
          digitalWrite(lane2[1],LOW);
          digitalWrite(lane2[2],HIGH);
          digitalWrite(lane1[0],HIGH);
          delay(2000);
          digitalWrite(lane2[2],LOW);
          digitalWrite(lane2[1],HIGH);
          digitalWrite(lane1[0],LOW);
          digitalWrite(lane1[1],HIGH);
          delay(2000);
          digitalWrite(lane2[1],LOW);
          digitalWrite(lane1[1],HIGH);

          break;

        case 'd':
          digitalWrite(lane2[0], HIGH);
          digitalWrite(lane1[2], LOW);
          digitalWrite(lane1[1], HIGH);
          digitalWrite(lane4[0], LOW);
          digitalWrite(lane4[1], HIGH);
          delay(2000);
          
          digitalWrite(lane1[1], LOW);
          digitalWrite(lane4[1], LOW);
          digitalWrite(lane4[0], LOW);
          digitalWrite(lane4[2], HIGH);
          digitalWrite(lane1[0], HIGH);
          delay(2000);
          digitalWrite(lane4[2], LOW);
          digitalWrite(lane1[0], LOW);
          digitalWrite(lane1[1], HIGH);
          break;
      }
    }
  }  
digitalWrite(lane2[0],HIGH);
digitalWrite(lane3[0],HIGH);
digitalWrite(lane4[0],HIGH);
delay(2000);
digitalWrite(lane1[2],LOW);
digitalWrite(lane3[0],LOW);
digitalWrite(lane1[1],HIGH);
digitalWrite(lane3[1],HIGH);

delay(2000);
digitalWrite(lane3[1],LOW);

  //l3 green high 
digitalWrite(lane3[2],HIGH);
//lane 3
  if (vw_get_message(buf, &buflen)) 
  {
      if (buflen >= 1) 
      {
        switch (buf[0]) 
        {
          // case 'a':
          
            // break;

          case 'a':
            digitalWrite(lane3[2],LOW);
            digitalWrite(lane3[1],HIGH);
            digitalWrite(lane1[1],HIGH);
            delay(2000);
            digitalWrite(lane3[0],HIGH);
            digitalWrite(lane3[1],LOW);
            digitalWrite(lane1[1],LOW);
            digitalWrite(lane1[2],HIGH);
            
            delay(2000);
            
            digitalWrite(lane1[2],LOW);
            digitalWrite(lane1[1],HIGH);
            digitalWrite(lane3[0],HIGH);
            delay(2000);
            digitalWrite(lane3[0],LOW);
            digitalWrite(lane3[1],HIGH);
            break;

          case 'b':
            digitalWrite(lane1[1],LOW);
            digitalWrite(lane1[0],HIGH);
            digitalWrite(lane3[2], LOW);
            digitalWrite(lane3[1], HIGH);
            delay(2000);
            digitalWrite(lane2[1], LOW);
            digitalWrite(lane2[1], HIGH);
            digitalWrite(lane3[1], LOW);
            digitalWrite(lane3[0], HIGH);
            digitalWrite(lane2[0],LOW);
            delay(2000);
            digitalWrite(lane2[1], LOW);
            digitalWrite(lane2[2], HIGH);
            delay(2000);
            digitalWrite(lane2[2], LOW);
            digitalWrite(lane2[1],HIGH);
            digitalWrite(lane3[1],HIGH);
            digitalWrite(lane3[0], LOW);
            delay(2000);
            digitalWrite(lane2[1],LOW);
            digitalWrite(lane2[0],HIGH);
            break;
          }
        }
      }
digitalWrite(lane1[1],LOW);
digitalWrite(lane1[1],LOW);
digitalWrite(lane1[0],HIGH);
delay(2000);
digitalWrite(lane3[2],LOW);
digitalWrite(lane4[0],LOW);
digitalWrite(lane3[1],HIGH);
digitalWrite(lane4[1],HIGH);

delay(2000);

  //l4 green high 
digitalWrite(lane4[2],HIGH);
 //lane 4
  if (vw_get_message(buf, &buflen)) 
  {
      if (buflen >= 1) 
      {
        switch (buf[0]) 
        {
          // case 'a':
          
          //   break;

          case 'a':
            digitalWrite(lane3[1],LOW);
            digitalWrite(lane3[0],HIGH);
            digitalWrite(lane4[2],LOW);
            digitalWrite(lane4[1],HIGH);
            digitalWrite(lane1[1],HIGH);
            delay(2000);
            digitalWrite(lane4[1],LOW);
            digitalWrite(lane1[1],LOW);
            digitalWrite(lane1[0],LOW);
            digitalWrite(lane4[0],HIGH);
            digitalWrite(lane1[2],HIGH);
            delay(2000);
            digitalWrite(lane1[2],LOW);
            digitalWrite(lane4[0],LOW);
            digitalWrite(lane1[1],HIGH);
            delay(2000);
            digitalWrite(lane1[1],LOW);
            digitalWrite(lane1[0],HIGH);
            digitalWrite(lane4[0],HIGH);
            // delay(2000);
            break;

          case 'c':
            digitalWrite(lane4[2], LOW);
            digitalWrite(lane3[1], HIGH);
            digitalWrite(lane4[1], HIGH);
            delay(2000);
            digitalWrite(lane4[1], LOW);
            digitalWrite(lane3[1], LOW);
            digitalWrite(lane4[0], HIGH);
            digitalWrite(lane3[2], HIGH);
            delay(2000);
            digitalWrite(lane4[1], HIGH);
            
            digitalWrite(lane3[2], LOW);
            
            
            digitalWrite(lane3[1], HIGH);
            
            delay(700);
            digitalWrite(lane4[0], LOW);
            break;
          }
        }
      }
     
digitalWrite(lane3[1],LOW);
digitalWrite(lane4[1],LOW);
digitalWrite(lane3[0],HIGH);
delay(2000);
digitalWrite(lane4[2],LOW);
digitalWrite(lane2[0],LOW);
digitalWrite(lane4[1],HIGH);
digitalWrite(lane2[1],HIGH);

delay(2000);

  //l2 green high 
digitalWrite(lane2[2],HIGH);
//lane 2
  if (vw_get_message(buf, &buflen)) 
  {
      if (buflen >= 1) 
      {
        switch (buf[0]) 
        {
          // case 'a':

          case 'c':
            digitalWrite(lane4[1], LOW);
            digitalWrite(lane4[0], HIGH);
            digitalWrite(lane2[2], LOW);
            digitalWrite(lane2[1], HIGH);
            digitalWrite(lane3[0], LOW);
            digitalWrite(lane3[1], HIGH);
            delay(2000);
            digitalWrite(lane2[1], LOW);
            digitalWrite(lane3[1], LOW);
            digitalWrite(lane2[0], HIGH);
            digitalWrite(lane3[2], HIGH);
            delay(2000);
            digitalWrite(lane2[1], HIGH);
            
            digitalWrite(lane2[1], LOW);
            delay(2000);
            digitalWrite(lane3[1], LOW);
            // digitalWrite(lane3[0], HIGH);
            
            digitalWrite(lane3[2], LOW);
            // digitalWrite(lane3[0], LOW);
            digitalWrite(lane3[1], HIGH);
            // digitalWrite(lane3[1], LOW);
            break;

          case 'd':
            digitalWrite(lane2[2], LOW);
            digitalWrite(lane2[1], HIGH);
            digitalWrite(lane4[1], HIGH);
            delay(2000);
            digitalWrite(lane2[1], LOW);
            digitalWrite(lane4[1], LOW);
            digitalWrite(lane2[0], HIGH);
            digitalWrite(lane4[2], HIGH);
            // digitalWrite(lane2[1], HIGH);
            // digitalWrite(lane2[0], LOW);
            delay(2000);
            digitalWrite(lane4[2], LOW);
            digitalWrite(lane2[0], LOW);
            digitalWrite(lane2[1], HIGH);
            delay(2000);

            break;
          }
        }
      }
digitalWrite(lane4[1],LOW);
digitalWrite(lane2[1],LOW);
digitalWrite(lane4[0],HIGH);
delay(2000);
digitalWrite(lane1[0],LOW);
digitalWrite(lane2[2],LOW);
digitalWrite(lane1[1],HIGH);
digitalWrite(lane2[1],HIGH);

delay(2000);
digitalWrite(lane2[1],LOW);
digitalWrite(lane1[1],LOW);
}