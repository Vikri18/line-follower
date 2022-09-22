
// nilai pwm 0-255
void maju(){
  analogWrite(kananSpeed,69);
  digitalWrite(kananA,HIGH);
  digitalWrite(kananB,LOW);
  analogWrite(kiriSpeed,83);
  digitalWrite(kiriA,HIGH);
  digitalWrite(kiriB,LOW);
}

void mundur(){
  analogWrite(kananSpeed,65);
  digitalWrite(kananA,LOW);
  digitalWrite(kananB,HIGH);
  analogWrite(kiriSpeed,65);
  digitalWrite(kiriA,LOW);
  digitalWrite(kiriB,HIGH);
}

void diam(){
  analogWrite(kananSpeed,0);
  digitalWrite(kananA,HIGH);
  digitalWrite(kananB,LOW);
  analogWrite(kiriSpeed,0);
  digitalWrite(kiriA,HIGH);
  digitalWrite(kiriB,LOW);
}

void belok_kanan(){
  //kanan mundur
  analogWrite(kananSpeed,70);
  digitalWrite(kananA,LOW);
  digitalWrite(kananB,HIGH);
  //maju
  analogWrite(kiriSpeed,110);
  digitalWrite(kiriA,HIGH);
  digitalWrite(kiriB,LOW);
}

void belok_kanan_dikit(){
  //kanan mundur
  analogWrite(kananSpeed,70);
  digitalWrite(kananA,LOW);
  digitalWrite(kananB,HIGH);
  //kiri maju
  analogWrite(kiriSpeed,99);
  digitalWrite(kiriA,HIGH);
  digitalWrite(kiriB,LOW);
}

void belok_kiri(){
  //kanan maju
  analogWrite(kananSpeed,110);
  digitalWrite(kananA,HIGH);
  digitalWrite(kananB,LOW);
  //kiri mundur
  analogWrite(kiriSpeed,70);
  digitalWrite(kiriA,LOW);
  digitalWrite(kiriB,HIGH);
}
void belok_kiri_dikit(){
  //kanan maju
  analogWrite(kananSpeed,99);
  digitalWrite(kananA,HIGH);
  digitalWrite(kananB,LOW);
  
  analogWrite(kiriSpeed,70);
  digitalWrite(kiriA,LOW);
  digitalWrite(kiriB,HIGH);
}
