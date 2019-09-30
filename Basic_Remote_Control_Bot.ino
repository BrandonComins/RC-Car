


// Pins used
const int leftFrontForward = 8;
const int leftFrontReverse = 9; 
const int leftFrontPwm = 10; 

const int leftBackForward = 12;
const int leftBackReverse = 13; 
const int leftBackPwm = 11;

const int rightFrontForward =4;
const int rightFrontReverse =2; 
const int rightFrontPwm = 3;


const int rightBackForward = 6;
const int rightBackReverse = 7; 
const int rightBackPwm = 5;

 




char Incoming_value = 0;  

void setup(){
    Serial.begin(9600);
 
    // For the motor to move forward:  pin 1 = HIGH and pin 2 = LOW
    // For the motor to move backward: pin 1 = LOW  and pin 2 = HIGH
    // For the motor to stop or break: pin 1 = LOW  and pin 2 = LOW
    // The PWM pin determines the speed of the motor
  
    pinMode(leftFrontForward, OUTPUT);
    pinMode(leftFrontReverse, OUTPUT); 
    pinMode(leftFrontPwm, OUTPUT);                      
    
    pinMode(leftBackForward, OUTPUT);
    pinMode(leftBackReverse, OUTPUT);
    pinMode(leftBackPwm, OUTPUT); 

    pinMode(rightFrontForward, OUTPUT);
    pinMode(rightFrontReverse, OUTPUT); 
    pinMode(rightFrontPwm, OUTPUT);                      
    
    pinMode(rightBackForward, OUTPUT);
    pinMode(rightBackReverse, OUTPUT);
    pinMode(rightBackPwm, OUTPUT); 
}



void loop() {
    
    Incoming_value = Serial.read();      //Read the incoming data and store it into variable Incoming_value
    Serial.print(Incoming_value);        //Print Value of Incoming_value in Serial monitor
    Serial.print("\n");        //New line 

    if(Incoming_value == 'n'){
         brake();
    }
   else if(Incoming_value == 'f'){
      fullForward();
    }
    else if(Incoming_value == 'b'){
      fullReverse();
    }
   else if(Incoming_value == 'l'){
      turnLeft();
    }
    else if(Incoming_value == 'r'){
      turnRight();
  }
}
  void fullForward(){
      
    // Move leftFront forward at full speed
    digitalWrite(leftFrontReverse, LOW);
    digitalWrite(leftFrontForward, HIGH);
    analogWrite(leftFrontPwm, 255);

    // Move leftBack forward at full speed
    digitalWrite(leftBackReverse, LOW);
    digitalWrite(leftBackForward, HIGH);
    analogWrite(leftBackPwm, 255);

    // Move rightFront forward at full speed
    digitalWrite(rightFrontReverse, LOW);
    digitalWrite(rightFrontForward, HIGH);
    analogWrite(rightFrontPwm, 255);

    // Move rightBack forward at full speed
    digitalWrite(rightBackReverse, LOW);
    digitalWrite(rightBackForward, HIGH);
    analogWrite(rightBackPwm, 255);
    
  }

 void brake(){
    // Stop leftFront
    digitalWrite(leftFrontReverse, LOW);
    digitalWrite(leftFrontForward, LOW);
    analogWrite(leftFrontPwm, 0);

    // Stop leftBack
    digitalWrite(leftBackReverse, LOW);
    digitalWrite(leftBackForward, LOW);
    analogWrite(leftBackPwm, 0);

    // Stop rightFront
    digitalWrite(rightFrontReverse, LOW);
    digitalWrite(rightFrontForward, LOW);
    analogWrite(rightFrontPwm, 0);

    // Stop rightBack
    digitalWrite(rightBackReverse, LOW);
    digitalWrite(rightBackForward, LOW);
    analogWrite(rightBackPwm, 0);

  }

  void fullReverse(){

    // Move leftFront forward at full speed
    digitalWrite(leftFrontReverse, HIGH);
    digitalWrite(leftFrontForward, LOW);
    analogWrite(leftFrontPwm, 255);

    // Move leftBack forward at full speed
    digitalWrite(leftBackReverse, HIGH);
    digitalWrite(leftBackForward, LOW);
    analogWrite(leftBackPwm, 255);

    // Move rightFront forward at full speed
    digitalWrite(rightFrontReverse, HIGH);
    digitalWrite(rightFrontForward, LOW);
    analogWrite(rightFrontPwm, 255);

    // Move rightBack forward at full speed
    digitalWrite(rightBackReverse, HIGH);
    digitalWrite(rightBackForward, LOW);
    analogWrite(rightBackPwm, 255);
  
  }

  void turnRight(){

     // Move leftFront forward at full speed
    digitalWrite(leftFrontReverse, HIGH);
    digitalWrite(leftFrontForward, LOW);
    analogWrite(leftFrontPwm, 255);

    // Move leftBack forward at full speed
    digitalWrite(leftBackReverse, HIGH);
    digitalWrite(leftBackForward, LOW);
    analogWrite(leftBackPwm, 255);

    // Move rightFront forward at full speed
    digitalWrite(rightFrontReverse, LOW);
    digitalWrite(rightFrontForward, HIGH);
    analogWrite(rightFrontPwm, 255);

    // Move rightBack forward at full speed
    digitalWrite(rightBackReverse, LOW);
    digitalWrite(rightBackForward, HIGH);
    analogWrite(rightBackPwm, 255);
  
  }

  void turnLeft(){
      // Move leftFront forward at full speed
    digitalWrite(leftFrontReverse, LOW);
    digitalWrite(leftFrontForward, HIGH);
    analogWrite(leftFrontPwm, 255);

    // Move leftBack forward at full speed
    digitalWrite(leftBackReverse, LOW);
    digitalWrite(leftBackForward, HIGH);
    analogWrite(leftBackPwm, 255);

    // Move rightFront forward at full speed
    digitalWrite(rightFrontReverse, HIGH);
    digitalWrite(rightFrontForward, LOW);
    analogWrite(rightFrontPwm, 255);

    // Move rightBack forward at full speed
    digitalWrite(rightBackReverse, HIGH);
    digitalWrite(rightBackForward, LOW);
    analogWrite(rightBackPwm, 255);
  
  }
  

