const int BA0 = 33;
const int BA1 = 22;
const int BA2 = 23;
const int BA3 = 24;
const int BA4 = 25;
const int BA5 = 26;
const int BA6 = 27;
const int BA7 = 28;
const int BA8 = 29;
const int BA9 = 30;
const int AEN = 31;
const int JP14 = 34;
const int IOR = 35;

const int OUT4 = 32;
const int OUT3 = 36;
const int OUT2 = 37;
const int OUT1 = 38;
const int OUT0 = 39;


void setup()
{
  pinMode(BA0, OUTPUT);
  pinMode(BA1, OUTPUT);
  pinMode(BA2, OUTPUT);
  pinMode(BA3, OUTPUT);
  pinMode(BA4, OUTPUT);
  pinMode(BA5, OUTPUT);
  pinMode(BA6, OUTPUT);
  pinMode(BA7, OUTPUT);
  pinMode(BA8, OUTPUT);
  pinMode(BA9, OUTPUT);
  pinMode(AEN, OUTPUT);
  pinMode(JP14, OUTPUT);
  pinMode(IOR, OUTPUT);

  pinMode(OUT0, INPUT);
  pinMode(OUT1, INPUT);
  pinMode(OUT2, INPUT);
  pinMode(OUT3, INPUT);
  pinMode(OUT4, INPUT);

  digitalWrite(BA0, LOW);
  digitalWrite(BA1, LOW);
  digitalWrite(BA2, LOW);
  digitalWrite(BA3, LOW);
  digitalWrite(BA4, LOW);
  digitalWrite(BA5, LOW);
  digitalWrite(BA6, LOW);
  digitalWrite(BA7, LOW);
  digitalWrite(BA8, LOW);
  digitalWrite(BA9, LOW);
  digitalWrite(AEN, LOW);
  digitalWrite(JP14, HIGH);
  digitalWrite(IOR, LOW);



  Serial.begin(115200);
  delay(3000);
  Serial.println("PAL16L8 decoder v0.0.0");


  for(int i=0; i<=0x3FF; i++) {
    write_address(i);
    Serial.println("0x" + String(i,HEX) + ": " + String(digitalRead(OUT0)) + ", " + String(digitalRead(OUT1)) + ", " + String(digitalRead(OUT2)) + ", " + String(digitalRead(OUT3)) + ", " + String(digitalRead(OUT4)));
  }



}

void loop()
{
}

void write_address(int input) {

  if(input & 0x001) digitalWrite(BA0, HIGH);
  else  digitalWrite(BA0, LOW);

  if(input & 0x002) digitalWrite(BA1, HIGH);
  else  digitalWrite(BA1, LOW);

  if(input & 0x004) digitalWrite(BA2, HIGH);
  else  digitalWrite(BA2, LOW);

  if(input & 0x008) digitalWrite(BA3, HIGH);
  else  digitalWrite(BA3, LOW);

  if(input & 0x010) digitalWrite(BA4, HIGH);
  else  digitalWrite(BA4, LOW);

  if(input & 0x020) digitalWrite(BA5, HIGH);
  else  digitalWrite(BA5, LOW);

  if(input & 0x040) digitalWrite(BA6, HIGH);
  else  digitalWrite(BA6, LOW);

  if(input & 0x080) digitalWrite(BA7, HIGH);
  else  digitalWrite(BA7, LOW);

  if(input & 0x100) digitalWrite(BA8, HIGH);
  else  digitalWrite(BA8, LOW);

  if(input & 0x200) digitalWrite(BA9, HIGH);
  else  digitalWrite(BA9, LOW);

}


