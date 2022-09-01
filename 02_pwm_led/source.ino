int led = 9;
int brightness = 0;
int brightnessStep = 10;
int stepPeriod = 40;

void setup()
{
    pinMode(led, OUTPUT);
}

void loop()
{
    analogWrite(led, brightness);
    brightness = brightness + brightnessStep;

    if (brightness <= 0 || brightness >= 250)
    {
        brightnessStep = -brightnessStep;
    }

    delay(stepPeriod);
}