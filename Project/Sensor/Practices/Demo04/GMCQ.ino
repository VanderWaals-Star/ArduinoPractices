#define INPUT_PIN 5
void setup(){
    Serial.begin(9600);
}
void loop(){
    if(digitalRead(INPUT_PIN)){
        Serial.println("LOW");
    }
    else
    {
        Serial.println("HIGH");
    }

}