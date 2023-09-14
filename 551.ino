
int brightness = 0;      

void setup() {
  pinMode(10, OUTPUT);
  pinMode(6, INPUT_PULLUP); 
  pinMode(7, INPUT_PULLUP);  
}

void loop() {
  if (digitalRead(6) == LOW) {  
    brightness += 5;            
    
    if (brightness >= 255) {           
      brightness = 255;
    }
    
    analogWrite(10, brightness);      
    delay(50);                           
  }
  
  if (digitalRead(7) == LOW) {  
    brightness -= 5;            
    
    if (brightness <= 0) {                   
      brightness = 0;
    }
    
    analogWrite(10, brightness);        
    delay(50);                                
  }
}