🔎 Overview

This project simulates a robotic system using *4 DC motors* controlled by an *L293D motor driver, along with a **servo motor* and an *ultrasonic sensor*. The system performs directional movement and reacts to obstacles using real-time distance measurement.

🎯 Objectives

- Control 4 DC motors using L293D to perform:
  - Forward movement for 30 seconds
  - Backward movement for 1 minute
  - Alternating right and left turns for 1 minute
- Stop and change direction when an object is detected within 10 cm using an ultrasonic sensor
- React with a servo motor based on the sensor feedback
  
⚙️ Components Used

- Arduino Uno
- L293D motor driver shield
- 4 × DC motors
- 1 × Servo motor
- 1 × Ultrasonic sensor (HC-SR04)
- Breadboard
- Jumper wires
- Power supply (5V)

🛠 Tools & Software

- [Tinkercad Circuits](https://www.tinkercad.com/) – to simulate the circuit
- Arduino IDE (within Tinkercad) – to write and test the logic

🚦 Features

- Full directional control using 4 DC motors
- Obstacle detection within 10 cm using ultrasonic sensor
- Automatic stop and direction change upon detection
- Servo motor adjusts position based on object presence
- Simulated entirely online with no physical hardware required

▶️ How to Use the Simulation

1. Open the project in *Tinkercad Circuits*
2. Ensure all components are connected:
   - DC motors wired to L293D outputs
   - Ultrasonic sensor wired to Arduino digital pins
   - Servo motor connected to a PWM pin
3. Upload the control logic to the Arduino
4. Start the simulation
5. Observe how the motors execute timed motions and react to obstacles

   🧠 Use Case

This simulation represents a basic autonomous robot behavior that can be applied to:

	•	Object-avoiding robotic vehicles
	•	Educational robotics prototypes
	•	Testing L293D motor driver functionality
	•	Training projects for embedded systems and automation
