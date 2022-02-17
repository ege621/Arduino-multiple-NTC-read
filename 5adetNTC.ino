int ThermistorPin = 0;
int Vo;
float R1 = 10000;
float logR2, R2, T;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
float Temp[5];
void setup() {
Serial.begin(9600);
}

void loop() {
for(int i = 0 ;i<4 ; i++)
{
  Vo = analogRead(i);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  T = T - 273.15; //do not subtract 273.15 for kelvin
  //T = (T * 9.0)/ 5.0 + 32.0; //Use this for fahreneit
  Temp[i] = T;
  Serial.print(Temp[i]); 
  Serial.print(" ");
}
Serial.println(" ");
  delay(1000);
}
