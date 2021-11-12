void main_loop()
{
   crtime = millis();
  motor(255, 255);
  Sonar();
  if (FsnrL <= 50 && FsnrL >0 )
  {
    motor(0,0);
    delay(10);
    handmove();
    Eyemove();
    Turn90L();
    
    
  }
   else if (FsnrR <= 50 && FsnrR >0 )
  {
    motor(0,0);
    delay(10);
    handmove();
    Turn90L();
    
    
  }
    if (crtime - prvtime >= 10000)
    {
      prvtime = crtime;
      //dir change
      int dir = random(1);

      if (dir == 0)
        Turn90L();

      else Turn90R();
    }

}
