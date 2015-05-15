/************************************************************************
**                                                                     **
**                        Descripció programa  
**                          Examen Arduino 15/05/2015
**                                                                     **
/***********************************************************************/

//******  Inculdes  *****************************************************


//******  Variables  ****************************************************
int val = analogRead(A0);
//******  Setup  ********************************************************
void setup () {
  pinMode(12, OUTPUT); pinMode(11, OUTPUT);  // Declarem com a sortides 
  pinMode(10, OUTPUT); pinMode(9, OUTPUT);   // els pins
  pinMode(8, OUTPUT);  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);  pinMode(2, INPUT);
  Serial.begin(9600);
 }
//******  Loop  *********************************************************
void loop () { 
  
 int val = analogRead(A0);  // Declarem la entrada "vale" com a entrada analògica
  
if(val>=0 && val<256) { //Primer tram que mostra el valor del potenciòmetre
 Serial.println (val);
 digitalWrite(12, LOW);  digitalWrite(11, LOW);
  digitalWrite(10, LOW);  digitalWrite(9, LOW); 
  digitalWrite(8, LOW);   digitalWrite(7, LOW);
  digitalWrite(6, LOW);   digitalWrite(5, LOW); 
  }
if(val>=256 && val<512) { // Segon tram. Tots els leds encesos
  digitalWrite(12, HIGH);  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);   digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);   digitalWrite(5, HIGH); 
  }
if(val>=512 && val<768){ //Tercer tram blink dels leds en funció del valor del potenciòmetre
  digitalWrite(12, LOW);  digitalWrite(11, LOW);
  digitalWrite(10, LOW);  digitalWrite(9, LOW); 
  digitalWrite(8, LOW);   digitalWrite(7, LOW);
  digitalWrite(6, LOW);   digitalWrite(5, LOW); 
  delay (analogRead(A0));
  digitalWrite(12, HIGH);  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);   digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);   digitalWrite(5, HIGH);
  delay (analogRead(A0));
  }
if(val>=768 && val<1023){ // Quart tram seqüència del cotxe fantàstic amb tres leds encesos
      
   digitalWrite(5, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   delay(100);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);
   delay(100);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(10, HIGH);
   delay(100);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, HIGH);
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   delay(100);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, HIGH);
   delay(100);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, HIGH);
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   delay(100);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(10, HIGH);
   digitalWrite(11, LOW);
   digitalWrite(12, LOW);
   delay(100);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);
   digitalWrite(10, LOW);
   digitalWrite(11, LOW);
   digitalWrite(12, LOW);
   delay(100);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, LOW);
   digitalWrite(10, LOW);
   digitalWrite(11, LOW);
   digitalWrite(12, LOW);
   delay(100);
   digitalWrite(5, HIGH);
   digitalWrite(6, HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);
   digitalWrite(10, LOW);
   digitalWrite(11, LOW);
   digitalWrite(12, LOW);
   delay(100);
  }
}
