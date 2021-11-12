void Turn90L()
{
  motor(-255, 255);
  delay(3000);
  motor(0, 0);
}

void Turn90R()
{
  motor(255, -255);
  delay(3000);
  motor(0, 0);
}

void Turn()
{
  motor(-255,255);
  delay(2000);
  motor(0,0);
}





void debug()
{
  motor(255, 255);
  delay(5000);

  motor(-255, 255);
  delay(5000);

  motor(255, -255);
  delay(5000);

  motor(-255, -255);
  delay(5000);
}
