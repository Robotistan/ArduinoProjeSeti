## Using Gas Sensor with Arduino

In this circuit, we made an alarm with gas sensor. When the amount of natural gas exceeds a certain threshold, it will send a signal and the buzzer on the circuit will start to sound.

Similarly, it can be done by determining the threshold value with the potentiometer on the sensor and receiving digital data from pin DO.
There are a number of resistors inside the gas sensor. The gas in the environment interacts with the resistors inside the sensor and changes the resistance values. By means of a voltage divider, the sensor gives different voltage values according to the gas density and, the amount of gas in the environment is measured with analog reading of these voltage values.



Let's set up the circuit and then start writing our project code.


![image](https://user-images.githubusercontent.com/111511331/191029573-5cfc9c2e-5952-4217-8196-d7c6080ff05b.png)
