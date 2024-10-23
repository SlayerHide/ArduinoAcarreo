int x = A0;  
int y = A1;  
int z = A2;  
int w = A3;  
int A = A4; 
int B = A5;  


int ledSuma = 2;     
int ledResta = 3;     
int ledMultiplicacion = 4; 
int ledDivision = 5;  

void setup() {
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  pinMode(z, INPUT);
  pinMode(w, INPUT);
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  
  
  pinMode(ledSuma, OUTPUT);
  pinMode(ledResta, OUTPUT);
  pinMode(ledMultiplicacion, OUTPUT);
  pinMode(ledDivision, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {

  int estadoX = digitalRead(x);
  int estadoY = digitalRead(y);
  int estadoZ = digitalRead(z);
  int estadoW = digitalRead(w);
  int operA = digitalRead(A);
  int operB = digitalRead(B);

  digitalWrite(ledSuma, LOW);
  digitalWrite(ledResta, LOW);
  digitalWrite(ledMultiplicacion, LOW);
  digitalWrite(ledDivision, LOW);
if(operA == HIGH && operB == HIGH){

  if (estadoX == HIGH && estadoY == LOW && estadoZ == LOW && estadoW == LOW) { 
      digitalWrite(ledSuma, HIGH);
      Serial.println("Suma");
    }
    else if (estadoY == HIGH && estadoX == LOW && estadoZ == LOW && estadoW == LOW) {
      digitalWrite(ledResta, HIGH);
      Serial.println("Resta"); 
    }
    else if (estadoZ == HIGH && estadoY == LOW && estadoX == LOW && estadoW == LOW){
      digitalWrite(ledMultiplicacion, HIGH);
      Serial.println("Multiplicacion");
    }
    else if (estadoW == HIGH && estadoY == LOW && estadoZ == LOW && estadoX == LOW) { 
      digitalWrite(ledDivision, HIGH);
      Serial.println("Division");
    }
delay(200);

}
}