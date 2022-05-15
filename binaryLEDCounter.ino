void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

int first = 13;
int second = 12;
int third = 8;
int fourth = 7;

void handelLight(int num) {
  while(num != 0)
  {
    if(num % 2 == 1)
    {
      digitalWrite(fourth, HIGH);
      num--;
    }
    if(num >= 8)
    {
      digitalWrite(first, HIGH);
      num -= 8;
    }
    if(num >= 4)
    {
      digitalWrite(second, HIGH);
      num -= 4;
    }
    if(num >= 2)
    {
      digitalWrite(third, HIGH);
      num -= 2;
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 1; i < 16; i++)
  {
    handelLight(i);
    delay(1000);
    digitalWrite(first, LOW);
    digitalWrite(second, LOW);
    digitalWrite(third, LOW);
    digitalWrite(fourth, LOW);
  }
}
