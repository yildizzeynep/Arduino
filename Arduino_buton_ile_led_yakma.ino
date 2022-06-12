#define Button 8
#define Led 10

int button_durumu = 0;


void setup() {
  pinMode(Button, INPUT);
  pinMode(Led, OUTPUT);
  // Button diye tanımlanan giriş olduğu için INPUT, Led çıkış olduğu için ise OUTPUT olarak tanımlanır.

}

void loop() {

button_durumu = digitalRead(Button);
  // button_durumu en üst kısımda 0 olarak tanımlanmıştı.

if(button_durumu ==1){
  digitalWrite(Led,HIGH);
}
else{
  digitalWrite(Led,LOW);
}
}
