#include <Servo.h>

class ServoAansturing {
  private:
    int PinNumberRightServo;
    int PinNumberLeftServo;
    Servo RightServo;
    Servo LeftServo;
  public:
    ServoAansturing (int PinNumberRightServo, int PinNumberLeftServo) {
      this->PinNumberRightServo = PinNumberRightServo;
      this->PinNumberLeftServo = PinNumberLeftServo;
    }
    void Stop() {
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500);
      this->LeftServo.writeMicroseconds(1500);
    }
    void driveForward(int speed) {
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 - speed);
      this->LeftServo.writeMicroseconds(1500 + speed);      
    }
    void driveBackward(int speed) {
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 + speed);
      this->LeftServo.writeMicroseconds(1500 - speed);
    }
    void turnLeft(int speed) {
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 - speed);
      this->LeftServo.writeMicroseconds(1500 + speed/32);
    }
    void turnRight(int speed) {
      this->RightServo.attach(PinNumberRightServo);
      this->LeftServo.attach(PinNumberLeftServo);
      this->RightServo.writeMicroseconds(1500 - speed);
      this->LeftServo.writeMicroseconds(1500 + (speed/32));
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
