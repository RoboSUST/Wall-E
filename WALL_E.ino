#include <Servo.h>
#include <NewPing.h>

Servo Lservo;
Servo Rservo;
Servo ELservo;
Servo ERservo;


#define MAX_DISTANCE 200
#define PING_INTERVAL 33


unsigned long crtime = 0;
unsigned long prvtime = 0;

NewPing FsonarL(52, 53, MAX_DISTANCE);
NewPing FsonarR(50, 51, MAX_DISTANCE);
// NewPing Bsonar(45, 20, MAX_DISTANCE);
NewPing DsonarF(46, 47, MAX_DISTANCE);
// NewPing DsonarB(23, 24, MAX_DISTANCE);

int FsnrL, FsnrR, Bsnr, DsnrF, DsnrB;



int fmlb = 12, fmlf = 13, fmrf = 3, fmrb = 2, fmls = 11, fmrs = 10;
int bmlb = 7, bmlf = 8, bmrf = 4, bmrb = 5, bmls = 9, bmrs = 6;




void setup() {
  Serial.begin(9600);
  pinMode(7 , OUTPUT);
  pinMode(8 , OUTPUT);
  pinMode(9 , OUTPUT);
  pinMode(10 , OUTPUT);
  pinMode(11 , OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(6 , OUTPUT);
  pinMode(12 , OUTPUT);


  Lservo.attach(22);
  Rservo.attach(23);
  ELservo.attach(24);
  ERservo.attach(25);

  Lservo.write(90);
  Rservo.write(90);


  ELservo.write(100);  //high 130  low 65 
  ERservo.write(25);  //high 45 low 0
}

void loop() {
  //Eyemove();
  //delay(2000);
main_loop();
//debug();
}
