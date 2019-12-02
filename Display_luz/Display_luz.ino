int SEG_A = 2;
int SEG_B = 3;
int SEG_C = 4;
int SEG_D = 5;
int SEG_E = 6;
int SEG_F = 7;
int SEG_G = 8;
int PONTO = 9;
int ATRASO = 150;

void numero (int numero){
  switch (numero){
    case 1:   digitalWrite(SEG_A, HIGH);
              digitalWrite(SEG_B, LOW);
              digitalWrite(SEG_C, LOW);
              digitalWrite(SEG_D, HIGH);
              digitalWrite(SEG_E, HIGH);
              digitalWrite(SEG_F, HIGH);
              digitalWrite(SEG_G, HIGH);
              break;
              
    case 2:   digitalWrite(SEG_A, LOW);
              digitalWrite(SEG_B, LOW);
              digitalWrite(SEG_C, HIGH);
              digitalWrite(SEG_D, LOW);
              digitalWrite(SEG_E, LOW);
              digitalWrite(SEG_F, HIGH);
              digitalWrite(SEG_G, LOW);
              break;
              
    case 3:   digitalWrite(SEG_A, LOW);
              digitalWrite(SEG_B, HIGH);
              digitalWrite(SEG_C, HIGH);
              digitalWrite(SEG_D, LOW);
              digitalWrite(SEG_E, LOW);
              digitalWrite(SEG_F, LOW);
              digitalWrite(SEG_G, LOW);
              break;
    case 4:   digitalWrite(SEG_A, HIGH);
              digitalWrite(SEG_B, HIGH);
              digitalWrite(SEG_C, LOW);
              digitalWrite(SEG_D, HIGH);
              digitalWrite(SEG_E, LOW);
              digitalWrite(SEG_F, LOW);
              digitalWrite(SEG_G, LOW);
              break;
              
    case 5:   digitalWrite(SEG_A, LOW);
              digitalWrite(SEG_B, HIGH);
              digitalWrite(SEG_C, LOW);
              digitalWrite(SEG_D, LOW);
              digitalWrite(SEG_E, HIGH);
              digitalWrite(SEG_F, LOW);
              digitalWrite(SEG_G, LOW);
              break;
              
    case 6:   digitalWrite(SEG_A, LOW);
              digitalWrite(SEG_B, LOW);
              digitalWrite(SEG_C, LOW);
              digitalWrite(SEG_D, LOW);
              digitalWrite(SEG_E, HIGH);
              digitalWrite(SEG_F, LOW);
              digitalWrite(SEG_G, LOW);
              break;
    case 7:   digitalWrite(SEG_A, HIGH);
              digitalWrite(SEG_B, HIGH);
              digitalWrite(SEG_C, HIGH);
              digitalWrite(SEG_D, LOW);
              digitalWrite(SEG_E, LOW);
              digitalWrite(SEG_F, LOW);
              digitalWrite(SEG_G, HIGH);
              break;
              
    case 8:   digitalWrite(SEG_A, LOW);
              digitalWrite(SEG_B, LOW);
              digitalWrite(SEG_C, LOW);
              digitalWrite(SEG_D, LOW);
              digitalWrite(SEG_E, LOW);
              digitalWrite(SEG_F, LOW);
              digitalWrite(SEG_G, LOW);
              break;
              
    case 9:   digitalWrite(SEG_A, LOW);
              digitalWrite(SEG_B, HIGH);
              digitalWrite(SEG_C, LOW);
              digitalWrite(SEG_D, LOW);
              digitalWrite(SEG_E, LOW);
              digitalWrite(SEG_F, LOW);
              digitalWrite(SEG_G, LOW);
              break;
  }
}


void setup() {
  // put your setup code here, to run once:
  for (int pino = SEG_A; pino <= SEG_G; pino++) {
  pinMode(pino, OUTPUT);  
  }
  Serial.begin(9600);
  pinMode(A0, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Luz ambiente: ");
  Serial.println(analogRead(A0));
  digitalWrite(SEG_A, HIGH);
  digitalWrite(SEG_B, HIGH);
  digitalWrite(SEG_C, HIGH);
  digitalWrite(SEG_D, HIGH);
  digitalWrite(SEG_E, HIGH);
  digitalWrite(SEG_F, HIGH);
  digitalWrite(SEG_G, HIGH);
  if (analogRead(A0) < 200){
    numero(1);
  }
  if (analogRead(A0) < 800){
    numero(2);
  }
  if (analogRead(A0) < 1000){
    numero(3);
  }    
  if (analogRead(A0) >=1000){
    numero(4);
  }
}
