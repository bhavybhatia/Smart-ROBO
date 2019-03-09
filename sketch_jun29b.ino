
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT); 
  }
  void forward () {
  digitalWrite (8 , LOW);
  digitalWrite (9, HIGH);
  digitalWrite (10 , HIGH);
  digitalWrite (11, LOW);
  }
void reverse () {
    digitalWrite (8, HIGH);
    digitalWrite (9,LOW);
    digitalWrite (10, LOW);
    digitalWrite (11, HIGH);
    }
void right () {
  digitalWrite (8,LOW);
  digitalWrite (9 , HIGH);
  digitalWrite (10 , LOW);
  digitalWrite (11 , HIGH);
  }

void left  () {
  digitalWrite (8, HIGH);
  digitalWrite (9 , LOW);
  digitalWrite (10 , HIGH);
  digitalWrite (11 ,LOW);
  }
  void stp  () {
  digitalWrite (8, LOW);
  digitalWrite (9 , LOW);
  digitalWrite (10 , LOW);
  digitalWrite (11 ,LOW);
  }
  
 




void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()){
    char x = Serial.read();
    Serial.println (x);
    
    if (x =='A') {
      forward ();
      }
      else if (x=='B') {
        reverse ();
        }
        else if (x=='C') {
          right ();
          }
          else if (x=='D') {
            left ();
            }
            else if (x=='E') {
              stp () ;
              }


   }
}
