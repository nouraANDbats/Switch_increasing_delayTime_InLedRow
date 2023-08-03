
int buttonPin=13;
int buttonVal;

int L1=2;
int L2=3;
int L3=4;
int L4=5;
int L5=6;
int L6=7;
int L7=8;
int L8=9;
int L9=10;
int L10=11;
int LedArray[]={L1,L2,L3,L4,L5,L6,L7,L8,L9,L10};

int delayTime=200;// initial delay time betwen the LEDs
int buttonNewValue;
int buttonOldValue=1;
int isPressed=0;

void setup()
{
  pinMode(buttonPin, INPUT_PULLUP);
  
  for(int i=0;i<=9;i++){// set the pinMode for all the LED pins 
    
    pinMode(LedArray[i], OUTPUT);

  }


  Serial.begin(9600);
}

void loop()
{
  buttonVal=digitalRead(buttonPin);//reading the the button signal 
  
  buttonNewValue=buttonVal;
  
     
  if(buttonOldValue==1&&buttonNewValue==0){
      
    delayTime=delayTime+50;// everytime the button is held add 50 to DelayTime

    
    Serial.print("Current Delay Time : ");
    Serial.println(delayTime);
  

  }
  
   for(int i=0;i<=9;i++){
     
    
   digitalWrite(LedArray[i],HIGH);
     delay(delayTime);
     digitalWrite(LedArray[i],LOW);
    

  }
  
  
  
  delay(100);
}
