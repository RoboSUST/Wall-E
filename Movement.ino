void handmove()
{
  for (int i = 90; i < 140; i++)
  {
    Rservo.write(i);
    Lservo.write(180 - i);
    delay(10);
  }
  for (int i = 140; i > 90; i--)
  {
    Rservo.write(i);
    Lservo.write(180 - i);
    delay(10);
  }

}

void Eyemove()
{
  for (int i = 45; i >0; i--)
  {
    ERservo.write(i);
    int a= map(i, 45, 0,65,130);
    ELservo.write(a);
    delay(20);
  }
    for (int i = 0; i <45; i++)
  {
    ERservo.write(i);
    int a= map(i, 0, 45,130,65);
    ELservo.write(a);
    delay(20);
  }
  ELservo.write(100);  //high 130  low 65 
  ERservo.write(25);  //high 45 low 0
}


