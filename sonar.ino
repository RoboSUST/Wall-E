int Sonar() {

  unsigned int uS1 = FsonarL.ping(); // Send ping, get ping time in microseconds (uS).
FsnrL = uS1 / US_ROUNDTRIP_CM;
//delay(50);

 unsigned int uS2 = FsonarR.ping();
 FsnrR = uS2 / US_ROUNDTRIP_CM;
// delay(50);

//unsigned int uS3 = Bsonar.ping();
//Bsnr = uS3 / US_ROUNDTRIP_CM;
//delay(50);

unsigned int uS4 = DsonarF.ping();
DsnrF = uS4/ US_ROUNDTRIP_CM;
//delay(50);

  
  return FsnrL;
  return FsnrR;
 // return Bsnr;
  return DsnrF;

}

