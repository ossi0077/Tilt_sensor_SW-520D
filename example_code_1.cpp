//기울기 센서 핀 번호 지정
#define tilt 7

void setup()
{
    //7번핀 INPUT으로 지정
    pinMode(tilt, INPUT);
    //시리얼 통신 시작
    delay(5000);
    Serial.begin(9600);
    Serial.println("Serial start");
}

void loop()
{
    if (digitalRead(tilt) == 0) //기울기 센서의 출력이 0인 경우(평형상태)
    {
        Serial.println("평형상태");
        delay(1000);
    }
    else if (digitalRead(tilt) == 1) //기울기 센서의 출력이 1인 경우(기울어짐 상태)
    {
        Serial.println("기울어짐");
        delay(1000);
    }
}