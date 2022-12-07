## Using Soil Moisture Sensor with Arduino

The soil moisture sensor consists of two electrodes. it measures the conductivity between the electrodes and gives information about how moist the soil is. lf the soil is moist, the conductivity between the electrodes increases. Since the resistance decreases as the conductivity increases, less voltage starts to come from the voltage divider inside the sensor. lf the soil is dry, a higher voltage is obtained as the resistance between electrodes will increase, and this data is processed analogously to learn the amount of moisture in the soil.

In this example, when the amount of moisture in the soil exceeds a certain threshold, it sends a signal and the buzzer on the circuit starts to make sound. in this circuit, we set the threshold value with the potentiometer on the sensor. Therefore, if the threshold exceeds the value set, it will give OV output from pin DO. Likewise, you can alsa prepare analogue data from pin AO in the range of OV-SV to operate when a certain threshold value is exceeded in the code.


Let's set up the circuit and then start writing our project code.

![image](https://user-images.githubusercontent.com/111511331/191015224-b902acba-70c4-4f28-813b-57bd2646eb35.png)

