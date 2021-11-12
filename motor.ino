void motor(int lm,int rm){
 
  if(lm == 0 && rm == 0)
  {
    digitalWrite(fmlf, LOW);
  digitalWrite(fmlb, LOW);
  digitalWrite(bmlf, LOW);
  digitalWrite(bmlb, LOW);

  
  digitalWrite(fmlf, LOW);
  digitalWrite(fmlb, LOW);
  digitalWrite(bmrf, LOW);
  digitalWrite(bmrb, LOW);
  
  analogWrite(fmrs, lm);
  analogWrite(fmls, rm);
  analogWrite(fmrs, lm);
  analogWrite(fmls, rm);
  }
  if(lm>0){
  digitalWrite(fmlf, HIGH);
  digitalWrite(fmlb, LOW);

  digitalWrite(bmlf, HIGH);
  digitalWrite(bmlb, LOW);
  
  analogWrite(fmls, lm);
  analogWrite(bmls, lm);
  }
  if(rm>0){
  digitalWrite(fmrf, HIGH);
  digitalWrite(fmrb, LOW);

  digitalWrite(bmrf, HIGH);
  digitalWrite(bmrb, LOW);
  
  analogWrite(bmrs, rm);
  analogWrite(fmrs, rm);
  
  }
  if(lm<0){
  digitalWrite(fmlf, LOW);
  digitalWrite(fmlb, HIGH);

  digitalWrite(bmlf, LOW);
  digitalWrite(bmlb, HIGH);
  
  analogWrite(fmls, -lm);
  analogWrite(bmls, -lm);
  }
  if(rm<0){
  digitalWrite(fmrf, LOW);
  digitalWrite(fmrb, HIGH);

  digitalWrite(bmrf, LOW);
  digitalWrite(bmrb, HIGH);
  
  analogWrite(fmrs, -rm);
  analogWrite(bmrs, -rm);
  }
  
  
}

