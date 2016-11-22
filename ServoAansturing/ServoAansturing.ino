#include <Servo.h>

class ServoAansturing {
  private:
    int PinNumberRightServo; //The right servo is mounted the opposite of the left servo so the right servo is programmed the opposite
    int PinNumberLeftServo;
    //Shows that the RightServo and the LeftServo are servo's
    Servo RightServo; 
    Servo LeftServo;
  public:
    ServoAansturing (int PinNumberRightServo, int PinNumberLeftServo) {
      this->PinNumberRightServo = PinNumberRightServo;
      this->PinNumberLeftServo = PinNumberLeftServo;
    }
    void Stop() {// makes the servo's stop
      this->RightServo.attach(PinNumberRightServo);//defines the pin number of the servo
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500); //The pulse that makes the servo stand still is 1500 microseconds
      this->LeftServo.writeMicroseconds(1500);
    }
    void driveForward(int speed) {//makes the boobot go straight forward
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 - speed);
      this->LeftServo.writeMicroseconds(1500 + speed);      
    }
    void driveBackward(int speed) {makes the boobot go straight backward
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 + speed);
      this->LeftServo.writeMicroseconds(1500 - speed);
    }
    void turnLeft(int speed) {//makes the boobot go left bij increasing the speed of the right servo
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 - speed);
      this->LeftServo.writeMicroseconds(1500 + speed/32);
    }
    void turnRight(int speed) {//makes the boobot go left bij increasing the speed of the left servo
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 + (speed/32));
      this->LeftServo.writeMicroseconds(1500 - speed);
    }
    void rotateLeft(int speed) {
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 - 100 );
      this->LeftServo.writeMicroseconds(1500 - 100);
      
    }
    void rotateRight() {
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 + 100);
      this->LeftServo.writeMicroseconds(1500 + 100);
    }

};

ServoAansturing Servomotoren(12, 13);

void setup() {
}

void loop() {
Servomotoren.rotateRight();
delay(2000);

}
