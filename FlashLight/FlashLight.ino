
int type = 0; 
bool on = false;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  if (type == 1 && on == true) {
    Flicker();
  } else if (type == 2 && on == true) {
    Off();
  } else {
    On();
  }
 
 
}

void Flicker() {
  for(int i = 0; i <= 30; i++){
  digitalWrite(6, LOW);   
  delay(2000);                       
  digitalWrite(6, HIGH);    
  delay(1000); 
  }
  on = false;
} 

void Off() {
  digitalWrite(6, LOW);
  delay(random(20000, 40000)); 
  digitalWrite(6, HIGH);
  on = false;
}

void On() {
  digitalWrite(6, HIGH);
  delay(random(20000, 40000)); 
  type = random(1,3);
  on = true;
  Serial.println(type);
}
