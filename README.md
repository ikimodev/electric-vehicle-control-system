# electric-vehicle-control-system
🚗 Bluetooth RC Car using Arduino

📌 Overview

This project is a Bluetooth-controlled robotic car built using Arduino. The car can be controlled wirelessly through a mobile application, allowing real-time movement in different directions.

The system is designed to be simple, cost-effective, and expandable for future upgrades such as sensors or AI features.


---

⚙️ Features

📱 Wireless control via Bluetooth

⬆️ Forward / Backward / Left / Right movement

⚡ Battery-powered system

🔧 Easy to modify and expand

🤖 Supports future upgrades (sensors, automation, AI)



---

🧰 Components Used

Arduino (Uno / Nano)

Bluetooth Module (HC-05)

Motor Driver (L298N or L293D Shield)

DC Motors (x2 or x4)

Battery Pack

Jumper Wires

Chassis (car base)



---

🔌 How It Works

1. The mobile app sends commands via Bluetooth.


2. The HC-05 module receives the signal.


3. Arduino processes the command.


4. The motor driver controls the motors accordingly.




---

🎮 Control Commands

Command	Action

F	Move Forward
B	Move Backward
L	Turn Left
R	Turn Right
S	Stop



---

🧠 Code

The Arduino code listens for Bluetooth commands and controls the motors based on received characters.

Example:

if (command == 'F') {
  // Move forward
}


---

🚀 Future Improvements

Add obstacle avoidance (Ultrasonic sensor)

Add gesture or voice control

Integrate AI features

Add solar charging system ☀️

Build custom mobile app UI



---

📸 Demo

(Add images or video of your project here)


---

📄 License

This project is open-source and free to use for educational purposes.


---

🙌 Acknowledgment

This project was built as part of learning Arduino, electronics, and embedded systems.
