//Blink Project
void Blink(int Pin, int Delay){
  
  void setup() {
  pinMode(Pin, OUTPUT);
  }

  void loop() {
    digitalWrite(Pin, HIGH);   
    delay(Delay);                      
    digitalWrite(Pin, LOW);   
    delay(Delay);                       
    }
}


// Read Analog Signal Project
void ReadAnalog(String Pin){
  
  void setup() {
    
    Serial.begin(9600);
   }

  void loop() {
    
    int sensorValue = analogRead(Pin);
    Serial.println(sensorValue);
    delay(1);        
   }
}


// If Conditonal Project
void IfConditional(int outpin,String inpin,int thres,String comparer){
    const int analogPin = inpin;    
    const int ledPin = outpin;       
    const int threshold = thres;   
    
    void setup(){
      
      pinMode(ledPin, OUTPUT);
      Serial.begin(9600);
    }
    
    void loop() {
      
      int analogValue = analogRead(analogPin);

      if(comparer == '>'){
          if (analogValue > thres) {
            digitalWrite(ledPin, HIGH);
          } else {
            digitalWrite(ledPin, LOW);
          }
        }
      else if(comparer == '<'){
          if (analogValue < thres) {
            digitalWrite(ledPin, HIGH);
          } else {
            digitalWrite(ledPin, LOW);
          }
        }
    
      Serial.println(analogValue);
      delay(1);        
    }
}
