#include <AFMotor.h>

// تعريف المحركات بناءً على المنافذ المتوقعة
AF_DCMotor motor1(1); // M1
AF_DCMotor motor2(2); // M2
AF_DCMotor motor3(3); // M3
AF_DCMotor motor4(4); // M4

void setup() {
  Serial.begin(9600);
}

void loop() {
  // تشغيل المحرك الأول
  motor1.setSpeed(200);
  motor1.run(FORWARD);
  delay(2000);
  motor1.run(RELEASE);
  delay(1000);

  // تشغيل المحرك الثاني
  motor2.setSpeed(200);
  motor2.run(FORWARD);
  delay(2000);
  motor2.run(RELEASE);
  delay(1000);

  // تشغيل المحرك الثالث
  motor3.setSpeed(200);
  motor3.run(FORWARD);
  delay(2000);
  motor3.run(RELEASE);
  delay(1000);

  // تشغيل المحرك الرابع
  motor4.setSpeed(200);
  motor4.run(FORWARD);
  delay(2000);
  motor4.run(RELEASE);
  delay(1000);
}
