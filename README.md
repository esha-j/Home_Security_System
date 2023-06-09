# Home_Security_System
Home Security System Using Arduino 

### ABSTRACT

Internet of Things (IoT) is the idea of remotely connecting and monitoring real-world objects (things) through the Internet. When it comes to our surroundings, this idea can be used to make them smarter and secure.
Home security is one of the major applications of the internet of things. However, the current systems are expensive due to the complexity of the device. In this project, we will attempt to design a cost-effective security system for use in homes as well as industrial areas such as banks. 
The system will use sensors to detect the presence of humans or animals, flame or smoke in the vicinity. This system can also detect if any burglar breaks in through the door. If anything is detected it will send a notification to the user's phone so that the user can take the required steps. This system uses an Arduino Uno board as an interface between the components and a SIM900A to send messages to the user's phone. The main advantages of such a system are the low cost, low maintenance, and ease of set up.

### PROPOSED SYSTEM

Any item in the real world which has an IP address to allow the transfer of information over a network can be made into an IoT object by equipping them with the relevant hardware like sensors, software, and networking gear. Internet of Things is different from the internet as in a way it transforms connectedness by communicating with embedded systems using the current internet setup.

Arduino is an open-source platform used for building electronics projects. The Arduino device consists of a circuit board called a microcontroller and software, or IDE (Integrated Development Environment) that is used to write and upload programs to the physical board. In comparison to other microcontrollers, it is a relatively low cost, easy to set up, maintain, and use. The Arduino board uses a USB cable to load new programs onto the board. The Arduino IDE uses a simplified version of C/C++ which makes it easy to program and use. It is very well suited to work in all operating system environments. The board provides all the utilities of a microcontroller in a more accessible package. The Arduino boards are cost-efficient and easier to work with for those just getting started with electronics projects. 

SIM900 GSM/GPRS shield is a device that functions as a GSM modem, which can be integrated into a large number of IoT projects. This component works just as any regular phone would work. Besides, the shield supports quad-band GSM/GPRS network, meaning it can function pretty much anywhere in the world. There are three LEDs on the SIM900 GSM/GPRS shield which shows connectivity or power status. The operating voltage of the SIM900 chip is from 3.4V to 4.4V. The shield comes with a high current, high accuracy, low-dropout voltage regulator MIC29302WU – which can handle load currents of up to 3A. The SIM900 GSM/GPRS shield uses the UART protocol to connect with an Arduino. The chip supports a baud rate of 1200bps-115200bps with Auto-Baud detection.

Security systems are certain electronic devices that are used to detect intrusions in the home or industry. The basic components of a home automation security system are motion detectors, temperature detectors, door lock detectors, and smoke detectors.

Active infrared sensors can both emit and detect infrared radiation. Here, they would be placed near the door and will act as a sensor when the door is being opened. When the sensor senses any heat nearby, it will signal the output components such as the buzzer and the SIM 900A which will then send a message to alert the user. Passive infrared (PIR) sensors only detect infrared radiation and do not emit it from an LED. PIR sensor is used to detect the presence of intruders from their body temperature. It has a 180-degree coverage making it suitable to detect any motion outside the house. MQ2 Gas sensor module can be used for sensing excessive LPG, Smoke, Alcohol, and Hydrogen concentrations in the air. The detection is based upon the change of resistance of the sensing material when the Gas comes in contact with the material. When any of the substance composition comes in contact with the sensor, it alerts the user through a message and the neighbour through the buzzer. The fire sensor responds to the presence of fire by sending a signal to the Arduino board.

The sensors send signals to the Arduino board whenever a possible danger is detected. The Arduino board then activates the buzzer module to produce an alarm sound. Further, the SIM-900A module is activated which sends a notification to the user's phone. The proposed system, including the components used and the architectural setup, have been inspired by the articles mentioned above in the literature review. The system is relatively low cost. Also, it is designed such that it is extremely easy to set up. 

### ARCHITECTURAL DIAGRAM

#### BLOCK DIAGRAM

![image](https://github.com/esha-j/Home_Security_System/assets/88835998/a2d74d54-8fd5-4858-836d-6467bc0550f9)

#### LAYERS OF THE DEVICE

![image](https://github.com/esha-j/Home_Security_System/assets/88835998/2d3bb52a-02db-41f9-91b9-25714b5c8f4d)

### IMPLEMENTATION

Connections were made as shown in the architectural diagram. The Arduino board must be connected to a power source. It is possible to solder a battery to the USB port of the Arduino with the appropriate components. The following code is to be uploaded to the Arduino board and it will run continuously as long as the power source is applied.

![image](https://github.com/esha-j/Home_Security_System/assets/88835998/5dc98b5c-3f92-4289-a257-9a7fa8dcb6c1)

### RESULTS AND CONCLUSION

The device was constructed successfully and yielded the required results. The desired objective of creating a low cost, low maintenance, and easy to set up system for home security using IOT was achieved.


