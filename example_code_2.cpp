//기울기 센서 핀 번호 지정
#define tilt 7

#define led 8 //쉽게 결과 확인을 위해 led 부착
int state = 0;

void setup()
{
    pinMode(tilt, INPUT);
    pinMode(led, OUTPUT);
}

void loop()
{
    state = digitalRead(tilt);
    if (state == 0)
    {
        Serial.println("평형상태");
        digitalWrite(led, LOW);
        delay(1000);
    }
    else if (state == 1)
    {
        Serial.println("기울어짐");
        digitalWrite(led, HIGH);
        delay(1000);
    }
}
