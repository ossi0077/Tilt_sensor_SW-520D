//���� ���� �� ��ȣ ����
#define tilt 7

void setup()
{
    //7���� INPUT���� ����
    pinMode(tilt, INPUT);
    //�ø��� ��� ����
    delay(5000);
    Serial.begin(9600);
    Serial.println("Serial start");
}

void loop()
{
    if (digitalRead(tilt) == 0) //���� ������ ����� 0�� ���(��������)
    {
        Serial.println("��������");
        delay(1000);
    }
    else if (digitalRead(tilt) == 1) //���� ������ ����� 1�� ���(������ ����)
    {
        Serial.println("������");
        delay(1000);
    }
}