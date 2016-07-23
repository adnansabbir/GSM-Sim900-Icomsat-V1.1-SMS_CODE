#include "SIM900.h"
#include <SoftwareSerial.h>
#include "sms.h"
SMSGSM sms;
boolean started=true;

void setup() 
{
  //Serial connection.
  Serial.begin(9600);
  Serial.println("GSM Shield testing.");

  if (gsm.begin(9600)){
    Serial.println("\nstatus=READY");
    started=true;  
  }
  else Serial.println("\nstatus=IDLE");
  
  if(started){
    if (sms.SendSMS("Insert you phone number here with country code", "SMS from Arduino"))
      Serial.println("\nSMS sent OK");
  }

};


void loop() 
{

}
