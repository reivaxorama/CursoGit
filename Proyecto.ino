int led=13;
int t=100;

void setup() {
 Serial.begin(9600);
 pinMode(led,OUTPUT);
}

void loop() {
 Serial.println("Hola mundo");
 for(int i=0; i<256;i++){
  analogWrite(led,i);
  delay (t);
 }

 for(int i=255; i>=0;i--){
  analogWrite(led,i);
  delay (t);
 }
}
