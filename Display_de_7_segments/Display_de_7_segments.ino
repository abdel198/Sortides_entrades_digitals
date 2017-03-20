/****************************************************************                                                             
**                       titulo :                              **                                                             
**                       Display de 7 segments                 **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 20/03/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************



//*********************** VARIABLES *****************************

int LED_A=5;
int LED_B=6;
int LED_C=7;
int LED_D=8;
int LED_E=9;
int LED_F=10;
int LED_G=11;
int LED_PUNTO=12;

//************************* SETUP *******************************
 
void setup() {               // configura el final de salida
  pinMode(LED_A, OUTPUT);
  pinMode(LED_B, OUTPUT);
  pinMode(LED_C, OUTPUT);
   pinMode(LED_D, OUTPUT);
  pinMode(LED_E, OUTPUT);
  pinMode(LED_F, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_PUNTO, OUTPUT);

  digitalWrite(LED_A, LOW);
  digitalWrite(LED_B, LOW);
  digitalWrite(LED_C, LOW);
  digitalWrite(LED_D, LOW);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_F, LOW);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_PUNTO, LOW);
}

//************************* LOOP ********************************

void loop() {                // inicia el bucle del programa
  digitalWrite(LED_A, HIGH);  // Núm :0
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_D, HIGH);
  digitalWrite(LED_E, HIGH);
  digitalWrite(LED_F, HIGH);
  digitalWrite(LED_G, LOW);
  
  digitalWrite(LED_PUNTO, HIGH);
  delay(1000);
  digitalWrite(LED_B, HIGH); //  Núm : 1
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_A, LOW);
  digitalWrite(LED_D, LOW);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_F, LOW);
   digitalWrite(LED_PUNTO, HIGH); 
  delay(1000);
  digitalWrite(LED_A, HIGH); //  Núm : 2
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_E, HIGH);
  digitalWrite(LED_D, HIGH);
  digitalWrite(LED_C, LOW);
  digitalWrite(LED_PUNTO, HIGH);
  delay(1000);
  digitalWrite(LED_A, HIGH); //  Núm : 3
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_D, HIGH);
  digitalWrite(LED_G, HIGH);
   digitalWrite(LED_E, LOW);
  digitalWrite(LED_PUNTO, HIGH);
  delay(1000);
  digitalWrite(LED_A, LOW); //  Núm : 4
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_D, LOW);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_F, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_PUNTO, HIGH);
  delay(1000); 
  digitalWrite(LED_A, HIGH); //  Núm : 5
  digitalWrite(LED_B, LOW);
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_D, HIGH);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_F, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_PUNTO, HIGH);
  delay(1000); 
  digitalWrite(LED_A, LOW); //  Núm : 6
  digitalWrite(LED_B, LOW);
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_D, HIGH);
  digitalWrite(LED_E, HIGH);
  digitalWrite(LED_F, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_PUNTO, HIGH);
  delay(1000); 
  digitalWrite(LED_A, HIGH); //  Núm : 7
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_D, LOW);
  digitalWrite(LED_E, LOW);
  digitalWrite(LED_F, LOW);
  digitalWrite(LED_G, LOW);
  digitalWrite(LED_PUNTO, HIGH);
  delay(1000); 
  digitalWrite(LED_A, HIGH); //  Núm : 8
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_D, HIGH);
  digitalWrite(LED_E,HIGH);
  digitalWrite(LED_F, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_PUNTO, HIGH);
  delay(1000); 
  digitalWrite(LED_A, HIGH); //  Núm : 9
  digitalWrite(LED_B, HIGH);
  digitalWrite(LED_C, HIGH);
  digitalWrite(LED_D, LOW);
  digitalWrite(LED_E,LOW);
  digitalWrite(LED_F, HIGH);
  digitalWrite(LED_G, HIGH);
  digitalWrite(LED_PUNTO, HIGH);
  delay(1000); 
 
}
//************************* FUNCIONS ****************************
