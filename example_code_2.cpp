//���� ���� �� ��ȣ ����
#define tilt 7

#define led 8 //���� ��� Ȯ���� ���� led ����
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
        Serial.println("��������");
        digitalWrite(led, LOW);
        delay(1000);
    }
    else if (state == 1)
    {
        Serial.println("������");
        digitalWrite(led, HIGH);
        delay(1000);
    }
}
