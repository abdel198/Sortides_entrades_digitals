/****************************************************************                                                             
**                       titulo :                              **                                                             
**                       Cruïlla de semàfors                   **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA : 13/03/2017        **                       
****************************************************************/                       
//************************ INCUDE *******************************



//*********************** VARIABLES *****************************

int LED_RA=7;
int LED_TA=8;
int LED_VA=9;
int LED_RB=10;
int LED_TB=11;
int LED_VB=12;

//************************* SETUP *******************************
 
void setup() {               // configura el final de salida
  pinMode(LED_RA, OUTPUT);
  pinMode(LED_TA, OUTPUT);
  pinMode(LED_VA, OUTPUT);
   pinMode(LED_RB, OUTPUT);
  pinMode(LED_TB, OUTPUT);
  pinMode(LED_VB, OUTPUT);

  digitalWrite(LED_RA, LOW);
  digitalWrite(LED_TA, LOW);
  digitalWrite(LED_VA, LOW);
  digitalWrite(LED_RB, LOW);
  digitalWrite(LED_TB, LOW);
  digitalWrite(LED_VB, LOW);
}

//************************* LOOP ********************************

void loop() {                // inicia el bucle del programa
  digitalWrite(LED_RA, HIGH);
  digitalWrite(LED_RB, HIGH);
  delay(4000);
  digitalWrite(LED_RB, LOW);
  digitalWrite(LED_RA, HIGH);
  digitalWrite(LED_VB, HIGH);
  delay(8000);
  digitalWrite(LED_RA, HIGH);
  digitalWrite(LED_TB, HIGH);
  digitalWrite(LED_VB, LOW);
  delay(2000);
  digitalWrite(LED_RA, HIGH);
  digitalWrite(LED_RB, HIGH);
  digitalWrite(LED_TB, LOW);
  delay(2000);
  digitalWrite(LED_RA, LOW);
  digitalWrite(LED_VA, HIGH);
  digitalWrite(LED_RB, HIGH);
  delay(8000);
  digitalWrite(LED_VA, LOW);
  digitalWrite(LED_TA, HIGH);
  digitalWrite(LED_RB, HIGH);
  delay(2000);
  digitalWrite(LED_TA, LOW);
  digitalWrite(LED_RA, HIGH);
  digitalWrite(LED_RB, HIGH);
}
//************************* FUNCIONS ****************************
