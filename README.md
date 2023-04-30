# Automated-Home-Security-System

This is a Multi-Layered Automatic Home Security System made using Arduino.

It provides three layers of security:

  ➼ LED lights that change color from Green to Yellow to Red based on the distance of the Intruder
  
  ➼ Proximity sensor that rings the alarm if intruder is too close to the house [Frequency of sound increases based on distance]
  
  ➼ Laser trip which triggers the alarm if intruder passes through it.
  
  
  The main parts used in this project are:
  
      ➼ Ultrasonic sensor (HCSR04)
      ➼ Photoelectric Resistor
      ➼ Laser dot diode module
      
      
 General Working:
 
This system works on the laser trip wire system and ultrasonic distance detection system.The main variables that come into play which makes these systems works is the photo intensity level being read by the photoelectric resistor and the distance measured from the ultrasonic sensor.
The way the whole system works together is the laser tripwire systems is the first layer of security where when the person goes past the laser the light intensity on the photoelectric resistor will reduce below the set threshold which will trigger the buzzers to alert the respective person. The next layer of protection is the ultrasonic sensor placed near the object, as the person gets closer at every set distance a LED will light up indicating how close the person is to the object and once the person
reaches really close to the object the buzzer starts to alarm the owner of the object.


Circuit Diagram:

![image](https://user-images.githubusercontent.com/79261869/235349020-66c48f9a-92f5-4c09-be71-0f61ba4b2a73.png)

Low level design:

![image](https://user-images.githubusercontent.com/79261869/235349043-c63ab769-be45-4046-97ea-398578ce84f1.png)


Physical Model:

![image](https://user-images.githubusercontent.com/79261869/235349062-9813696a-8ade-4d03-b918-4d5c2e4abdac.png)

![image](https://user-images.githubusercontent.com/79261869/235349071-271fd154-e0fb-47e0-9bea-326bdb5e42db.png)

![image](https://user-images.githubusercontent.com/79261869/235349076-20ad6c33-159c-4b80-94bf-294aab7b9a80.png)


Terminal Output:

![image](https://user-images.githubusercontent.com/79261869/235349084-3fedf709-fee8-470b-83e3-b9da8525ca5d.png)

![image](https://user-images.githubusercontent.com/79261869/235349090-fcce0478-f646-4381-8945-0d4579414395.png)
