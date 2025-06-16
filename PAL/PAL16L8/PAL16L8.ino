const int IN0 = 22;
const int IN1 = 23;
const int IN2 = 24;
const int IN3 = 25;
const int IN4 = 26;
const int IN5 = 27;
const int IN6 = 28;
const int IN7 = 29;
const int IN8 = 30;
const int IN9 = 31;

const int OUT0 = 32;
const int OUT1 = 33;
const int OUT2 = 34;
const int OUT3 = 35;
const int OUT4 = 36;
const int OUT5 = 37;
const int OUT6 = 38;
const int OUT7 = 39;


void setup()
{
  pinMode(IN0, INPUT);
  pinMode(IN1, INPUT);
  pinMode(IN2, INPUT);
  pinMode(IN3, INPUT);
  pinMode(IN4, INPUT);
  pinMode(IN5, INPUT);
  pinMode(IN6, INPUT);
  pinMode(IN7, INPUT);
  pinMode(IN8, INPUT);
  pinMode(IN9, INPUT);

  pinMode(OUT0, OUTPUT);
  pinMode(OUT1, OUTPUT);
  pinMode(OUT2, OUTPUT);
  pinMode(OUT3, OUTPUT);
  pinMode(OUT4, OUTPUT);
  pinMode(OUT5, OUTPUT);
  pinMode(OUT6, OUTPUT);
  pinMode(OUT7, OUTPUT);

  digitalWrite(IN0, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  digitalWrite(IN5, LOW);
  digitalWrite(IN6, LOW);
  digitalWrite(IN7, LOW);
  digitalWrite(IN8, LOW);
  digitalWrite(IN9, LOW);



  Serial.begin(115200);
  delay(3000);
  Serial.println("PAL16L8 decoder v0.0.0");

}

void loop()
{
  for(int i=0; i<10; i++) {
    write_input(1<<i);
    delay(1000);
  }
}

void write_input(int input) {

  if(input & 0x001) digitalWrite(IN0, HIGH);
  else  digitalWrite(IN0, LOW);

  if(input & 0x002) digitalWrite(IN1, HIGH);
  else  digitalWrite(IN1, LOW);

  if(input & 0x004) digitalWrite(IN2, HIGH);
  else  digitalWrite(IN2, LOW);

  if(input & 0x008) digitalWrite(IN3, HIGH);
  else  digitalWrite(IN3, LOW);

  if(input & 0x010) digitalWrite(IN4, HIGH);
  else  digitalWrite(IN4, LOW);

  if(input & 0x020) digitalWrite(IN5, HIGH);
  else  digitalWrite(IN5, LOW);

  if(input & 0x040) digitalWrite(IN6, HIGH);
  else  digitalWrite(IN6, LOW);

  if(input & 0x080) digitalWrite(IN7, HIGH);
  else  digitalWrite(IN7, LOW);

  if(input & 0x100) digitalWrite(IN8, HIGH);
  else  digitalWrite(IN8, LOW);

  if(input & 0x200) digitalWrite(IN9, HIGH);
  else  digitalWrite(IN9, LOW);

}
