// Pins
const int ledPin = 9;
const int lightSensorPin = 0;

// Variables
int lightVal;
int lightCal;

void setup()
{
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    lightCal = analogRead(lightSensorPin);
}

void loop()
{
    lightVal = analogRead(lightSensorPin);
    if (lightVal < 5)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
    Serial.println(lightVal);
    delay(100);
}