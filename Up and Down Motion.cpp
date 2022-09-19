int A = 8;
int B = 9;
int C = 10;
int D = 11;

char a;

void setup()
{
    pinMode(A, OUTPUT);
    pinMode(B, OUTPUT);
    pinMode(C, OUTPUT);
    pinMode(D, OUTPUT);
    Serial.begin(9600);
}

void loop()
{

    if (Serial.available() > 0)
    {

        a = Serial.read();
        Serial.println(a);
        if (a == 'R')
        {
            Serial.println(a);
            digitalWrite(A, 0);
            digitalWrite(B, 1);
            digitalWrite(C, 0);
            digitalWrite(D, 0);
        }

        if (a == 'L')
        {
            digitalWrite(A, 1);
            digitalWrite(B, 0);
            digitalWrite(C, 0);
            digitalWrite(D, 0);
        }

        if (a == 'U')
        {
            digitalWrite(A, 0);
            digitalWrite(B, 0);
            digitalWrite(C, 0);
            digitalWrite(D, 0);
        }
    }
}
