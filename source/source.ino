int w = 13;
int x = 12;
int y = 11;
int z = 10;

void setup()
{
	pinMode(w, OUTPUT);
  	pinMode(x, OUTPUT);
  	pinMode(y, OUTPUT);
  	pinMode(z, OUTPUT);
}

void loop()
{
  	//0000
   digitalWrite(w, LOW);
   digitalWrite(x, LOW);
   digitalWrite(y, LOW);
   digitalWrite(z, LOW);
   delay(1000);
  
	//0001
   digitalWrite(w, LOW);
   digitalWrite(x, LOW);
   digitalWrite(y, LOW);
   digitalWrite(z, HIGH);
   delay(1000);
  
	//0010
   digitalWrite(w, LOW);
   digitalWrite(x, LOW);
   digitalWrite(y, HIGH);
   digitalWrite(z, LOW);
   delay(1000);
  
  	//0011
   digitalWrite(w, LOW);
   digitalWrite(x, LOW);
   digitalWrite(y, HIGH);
   digitalWrite(z, HIGH);
   delay(1000);  
  
  	//0100
   digitalWrite(w, LOW);
   digitalWrite(x, HIGH);
   digitalWrite(y, LOW);
   digitalWrite(z, LOW);
   delay(1000);  
  
  	//0101
   digitalWrite(w, LOW);
   digitalWrite(x, HIGH);
   digitalWrite(y, LOW);
   digitalWrite(z, HIGH);
   delay(1000); 
  
  	//0110
   digitalWrite(w, LOW);
   digitalWrite(x, HIGH);
   digitalWrite(y, HIGH);
   digitalWrite(z, LOW);
   delay(1000);   
  
  	//0111
   digitalWrite(w, LOW);
   digitalWrite(x, HIGH);
   digitalWrite(y, HIGH);
   digitalWrite(z, HIGH);
   delay(1000); 
  
  	//1000
   digitalWrite(w, HIGH);
   digitalWrite(x, LOW);
   digitalWrite(y, LOW);
   digitalWrite(z, LOW);
   delay(1000); 
  
  	//1001
   digitalWrite(w, HIGH);
   digitalWrite(x, LOW);
   digitalWrite(y, LOW);
   digitalWrite(z, HIGH);
   delay(1000); 
  
  	//1010
   digitalWrite(w, HIGH);
   digitalWrite(x, LOW);
   digitalWrite(y, HIGH);
   digitalWrite(z, LOW);
   delay(1000);  
  
  	//1011
   digitalWrite(w, HIGH);
   digitalWrite(x, LOW);
   digitalWrite(y, HIGH);
   digitalWrite(z, HIGH);
   delay(1000);  
  
	//1100  
   digitalWrite(w, HIGH);
   digitalWrite(x, HIGH);
   digitalWrite(y, LOW);
   digitalWrite(z, LOW);
   delay(1000); 
  
	//1101
   digitalWrite(w, HIGH);
   digitalWrite(x, HIGH);
   digitalWrite(y, LOW);
   digitalWrite(z, HIGH);
   delay(1000);
  
	//1110
   digitalWrite(w, HIGH);
   digitalWrite(x, HIGH);
   digitalWrite(y, HIGH);
   digitalWrite(z, LOW);
   delay(1000);	  
  
	//1111  
   digitalWrite(w, HIGH);
   digitalWrite(x, HIGH);
   digitalWrite(y, HIGH);
   digitalWrite(z, HIGH);
   delay(1000);  
}